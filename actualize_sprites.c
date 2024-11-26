/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Actualizes sprites' position and frames.
*/

#include "myhunter.h"

void actualize_a_sprite(mysprite_t *mysprite)
{
    int offset = mysprite->offset;

    move_rect(&(mysprite->box), offset, offset * mysprite->frames);
}

void actualize_sprites(mysprite_t **my_sprites)
{
    for (int i = 0; i < MAX_SPRITES; i++) {
        if (my_sprites[i] != NULL && my_sprites[i]->alive == 1)
            actualize_a_sprite(my_sprites[i]);
    }
}
