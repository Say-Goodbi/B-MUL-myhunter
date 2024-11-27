/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** fkoezij
*/

#include "myhunter.h"
#include <stdio.h>

void delete_gone_sprite(mysprite_t **my_sprites, int i, sfVector2f pos,
    spawner_t *spawner_c)
{
    sfVector2f flattening_scale = {0.5, 1};
    sfVector2f mov = {30, 0};

    if (pos.x > 1700 || pos.x < -300) {
        my_sprites[i]->alive = 0;
        sfSprite_scale(my_sprites[i]->sprite, flattening_scale);
        sfSprite_move(my_sprites[i]->sprite, mov);
        spawner_c->lives -= 1;
    }
}
