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
    sfVector2f vect = {656.5f, 500.0f};
    int offset = 407;
    int frames = 1;
    mysprite_t *my_sprite = malloc(sizeof(mysprite_t));

    my_sprite->type = 0;
    my_sprite->velocity_x = 0.0f;
    my_sprite->velocity_y = 0.0f;
    my_sprite->sprite = new_sprite(resources->textures[1]);
    delimit_mysprite(my_sprite, &box, offset, frames);
    sfSprite_setPosition(my_sprite->sprite, vect);
    append_sprite(resources, my_sprite);
}
