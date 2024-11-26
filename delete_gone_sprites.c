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
    if (pos.x > 1700 || pos.x < -300) {
        my_sprites[i]->alive = 0;
        spawner_c->lives -= 1;
    }
}
