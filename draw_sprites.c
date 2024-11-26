/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Draws every sprite in the array
*/

#include <stddef.h>
#include "myhunter.h"
#include "resources.h"

void draw_a_sprite(sfRenderWindow *window, mysprite_t *mysprite)
{
    int offset = mysprite->offset;

    sfSprite_setTextureRect(mysprite->sprite, mysprite->box);
    sfRenderWindow_drawSprite(window, mysprite->sprite, NULL);
    if (mysprite->type == BOUNCYBALL && mysprite->alive == 1)
        sfSprite_rotate(mysprite->sprite, 0.06f);
}

void draw_sprites(sfRenderWindow *window, mysprite_t **my_sprites)
{
    for (int i = 0; i < MAX_SPRITES; i++) {
        if (my_sprites[i] != NULL)
            draw_a_sprite(window, my_sprites[i]);
    }
}
