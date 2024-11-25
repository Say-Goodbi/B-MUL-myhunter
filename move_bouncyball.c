/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Move a bouncyball sprite.
*/

#include "myhunter.h"

void move_bouncyball(mysprite_t **my_sprites, int i)
{
    sfVector2f pos = {0};
    sfVector2f scaledown = {0.9, 0.9};

    pos = sfSprite_getPosition(my_sprites[i]->sprite);
    if (pos.y >= 1060 || pos.y <= 20) {
        my_sprites[i]->velocity_y *= -1.1f;
        my_sprites[i]->radius *= 0.9;
        sfSprite_scale(my_sprites[i]->sprite, scaledown);
    }
    pos.x += my_sprites[i]->velocity_x;
    pos.y += my_sprites[i]->velocity_y;
    sfSprite_setPosition(my_sprites[i]->sprite, pos);
    delete_gone_sprite(my_sprites, i, pos);
}
