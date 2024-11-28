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
    sfVector2f scale = {0.5f, 1};
    sfVector2f move = {40, 0};

    if (pos.x > 1700 || pos.x < -300) {
        my_sprites[i]->alive = 0;
        sfSprite_scale(my_sprites[i]->sprite, scale);
        sfSprite_move(my_sprites[i]->sprite, move);
        spawner_c->lives -= 1;
    }
}
