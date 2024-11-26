/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Prepares the sprite for fork
*/

#include <stdlib.h>
#include "myhunter.h"
#include <stdio.h>

void load_fork(resources_t *resources, float x, float y)
{
    int i = 0;
    sfIntRect box = {0, 0, 127, 60};
    sfVector2f origin = {0, 0};
    sfVector2f vect = {x, y};
    int offset = 127;
    int frames = 1;
    mysprite_t *my_sprite = malloc(sizeof(mysprite_t));

    my_sprite->type = 3;
    my_sprite->alive = 1;
    my_sprite->radius = 0;
    my_sprite->velocity_x = 0.5f;
    my_sprite->velocity_y = 0.0f;
    my_sprite->sprite = new_sprite(resources->textures[3]);
    delimit_mysprite(my_sprite, &box, offset, frames);
    sfSprite_setOrigin(my_sprite->sprite, origin);
    sfSprite_setPosition(my_sprite->sprite, vect);
    append_sprite(resources, my_sprite);
}
