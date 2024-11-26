/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Move a duck sprite.
*/

#include "myhunter.h"

void move_duck(mysprite_t **my_sprites, int i, spawner_t *spawner_c)
{
    sfVector2f pos = {0};

    pos = sfSprite_getPosition(my_sprites[i]->sprite);
    pos.x += my_sprites[i]->velocity_x;
    pos.y += my_sprites[i]->velocity_y;
    sfSprite_setPosition(my_sprites[i]->sprite, pos);
    delete_gone_sprite(my_sprites, i, pos, spawner_c);
}
