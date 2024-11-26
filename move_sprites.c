/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Moves sprites depending on their speed.
*/

#include <stdio.h>
#include "myhunter.h"

void move_a_sprite(mysprite_t **my_sprites, int i, spawner_t *spawner_c)
{
    switch (my_sprites[i]->type) {
        case DUCK :
            move_duck(my_sprites, i, spawner_c);
            break;
        case BOUNCYBALL :
            move_bouncyball(my_sprites, i, spawner_c);
            break;
        case FORK :
            move_fork(my_sprites, i, spawner_c);
            break;
    }
}

void move_sprites(mysprite_t **my_sprites, spawner_t *spawner_c)
{
    for (int i = 0; i < MAX_SPRITES; i++) {
        if (my_sprites[i] != NULL && my_sprites[i]->alive == 1) {
            move_a_sprite(my_sprites, i, spawner_c);
        }
    }
}
