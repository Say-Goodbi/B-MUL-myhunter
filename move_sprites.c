/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Moves sprites depending on their speed.
*/

#include <stdio.h>
#include "myhunter.h"

void delete_gone_sprite(mysprite_t **my_sprites, int i, sfVector2f pos)
{
    if (pos.x > 1000 || pos.x < -100)
        destroy_mysprite(&my_sprites[i]);
}

void move_sprites(mysprite_t **my_sprites)
{
    sfVector2f pos = {0};

    for (int i = 0; i < MAX_SPRITES; i++) {
        if (my_sprites[i] != NULL) {
            pos = sfSprite_getPosition(my_sprites[i]->sprite);
            pos.x += my_sprites[i]->velocity_x;
            pos.y += my_sprites[i]->velocity_y;
            sfSprite_setPosition(my_sprites[i]->sprite, pos);
            delete_gone_sprite(my_sprites, i, pos);
        }
    }
}
