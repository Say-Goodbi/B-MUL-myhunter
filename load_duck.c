/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Prepares the sprite for duck
*/

#include <stdlib.h>
#include "myhunter.h"
#include <stdio.h>

void load_duck(resources_t *resources, float x, float y)
{
    int i = 0;
    sfIntRect box = {0, 0, 110, 110};
    sfVector2f vect = {x, y};
    int offset = 110;
    int frames = 3;
    mysprite_t *my_sprite = malloc(sizeof(mysprite_t));

    my_sprite->type = 1;
    my_sprite->velocity_x = 0.3f;
    my_sprite->velocity_y = 0.02f;
    my_sprite->sprite = new_sprite(resources->textures[0]);
    delimit_mysprite(my_sprite, &box, offset, frames);
    sfSprite_move(my_sprite->sprite, vect);
    append_sprite(resources, my_sprite);
}
