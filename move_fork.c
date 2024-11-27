/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Move a duck sprite.
*/

#include "myhunter.h"

void move_fork(mysprite_t **my_sprites, int i, spawner_t *spawner_c)
{
    sfVector2f pos = {0};

    pos = sfSprite_getPosition(my_sprites[i]->sprite);
    pos.x += my_sprites[i]->velocity_x;
    my_sprites[i]->velocity_x *= 0.9999;
    sfSprite_setPosition(my_sprites[i]->sprite, pos);
    delete_gone_sprite(my_sprites, i, pos, spawner_c);
}
