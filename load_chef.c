/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** loads chief sprite
*/

#include <stdlib.h>
#include "myhunter.h"

void load_chef(resources_t *resources, float x, float y)
{
    int i = 0;
    sfIntRect box = {0, 0, 540, 540};
    sfVector2f vect = {x, y};
    int offset = 540;
    int frames = 1;
    mysprite_t *my_sprite = malloc(sizeof(mysprite_t));

    my_sprite->type = 0;
    my_sprite->alive = 1;
    my_sprite->rot = 0;
    my_sprite->velocity_x = 0.0f;
    my_sprite->velocity_y = 0.0f;
    my_sprite->sprite = new_sprite(resources->textures[4]);
    delimit_mysprite(my_sprite, &box, offset, frames);
    sfSprite_setPosition(my_sprite->sprite, vect);
    append_menusprite(resources, my_sprite);
}
