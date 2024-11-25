/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Moves sprites depending on their speed.
*/

#include <stdio.h>
#include "myhunter.h"

void move_a_sprite(mysprite_t **my_sprites, int i)
{
    switch (my_sprites[i]->type) {
        case DUCK :
            move_duck(my_sprites, i);
            break;
        case BOUNCYBALL :
            move_bouncyball(my_sprites, i);
            break;
    }
}

void move_sprites(mysprite_t **my_sprites)
{
    for (int i = 0; i < MAX_SPRITES; i++) {
        if (my_sprites[i] != NULL) {
            move_a_sprite(my_sprites, i);
        }
    }
}
