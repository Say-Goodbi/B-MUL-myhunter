/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Move a duck sprite.
*/

#include "myhunter.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>

float drad(float d)
{
    return (d * M_PI / 180);
}

int looping_move(mysprite_t *msprite, sfVector2f *mov)
{
    sfVector2f origin = *mov;
    sfVector2f pos = sfSprite_getPosition(msprite->sprite);
    float rot = msprite->rot > -360.0f ? msprite->rot - 0.1 : -0.1f;

    if (msprite == NULL)
        return 1;
    if (rot < -0.11 || rot > -0.099 ||
        (pos.y > 400 && pos.x > 400 && pos.x < 1400 &&
        rand() % 10000 < 2)) {
        msprite->rot = rot;
        sfSprite_setRotation(msprite->sprite, (int)rot);
        mov->x = origin.x * cos(drad(rot)) + origin.y * - sin(drad(rot));
        mov->y = origin.x * sin(drad(rot)) + origin.y * cos(drad(rot));
        return 0;
    }
    return 1;
}

void move_duck(mysprite_t **my_sprites, int i, spawner_t *spawner_c)
{
    sfVector2f pos = {0};
    sfVector2f move = {my_sprites[i]->velocity_x, my_sprites[i]->velocity_y};

    pos = sfSprite_getPosition(my_sprites[i]->sprite);
    looping_move(my_sprites[i], &move);
    pos.x += move.x;
    pos.y += move.y;
    sfSprite_setPosition(my_sprites[i]->sprite, pos);
    delete_gone_sprite(my_sprites, i, pos, spawner_c);
}
