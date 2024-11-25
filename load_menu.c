/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Prepares the sprite for duck
*/

#include <stdlib.h>
#include "myhunter.h"
#include <stdio.h>

void load_menu(resources_t *resources)
{
    int i = 0;
    sfIntRect box = {0, 0, 407, 420};
    sfVector2f origin = {203, 210};
    sfVector2f vect = {950.0f, 750.0f};
    int offset = 407;
    int frames = 1;
    mysprite_t *my_sprite = malloc(sizeof(mysprite_t));

    my_sprite->type = 0;
    my_sprite->radius = 200;
    my_sprite->velocity_x = 0.0f;
    my_sprite->velocity_y = 0.0f;
    my_sprite->sprite = new_sprite(resources->textures[1]);
    delimit_mysprite(my_sprite, &box, offset, frames);
    sfSprite_setPosition(my_sprite->sprite, vect);
    sfSprite_setOrigin(my_sprite->sprite, origin);
    append_sprite(resources, my_sprite);
}
