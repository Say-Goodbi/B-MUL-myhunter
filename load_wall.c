/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Prepares the sprite for fork
*/

#include <stdlib.h>
#include "myhunter.h"
#include <stdio.h>

void load_wall(resources_t *resources, float x, float y)
{
    sfIntRect box = {0, 0, 270, 900};
    sfVector2f origin = {0, 0};
    sfVector2f vect = {x, y};
    sfVector2f scale = {1.0, 1.4};
    int offset = 270;
    int frames = 1;
    mysprite_t *my_sprite = malloc(sizeof(mysprite_t));

    my_sprite->type = 10;
    my_sprite->alive = 1;
    my_sprite->sprite = new_sprite(resources->textures[5]);
    delimit_mysprite(my_sprite, &box, offset, frames);
    sfSprite_setOrigin(my_sprite->sprite, origin);
    sfSprite_setPosition(my_sprite->sprite, vect);
    sfSprite_setScale(my_sprite->sprite, scale);
    append_sprite(resources, my_sprite);
}
