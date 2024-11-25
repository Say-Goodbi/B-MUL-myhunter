/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Prepares the sprite for bouncyball
*/

#include <stdlib.h>
#include "myhunter.h"
#include <stdio.h>

void load_bouncyball(resources_t *resources, float x, float y)
{
    int i = 0;
    sfIntRect box = {0, 0, 197, 181};
    sfVector2f origin = {98, 90};
    sfVector2f vect = {x, y};
    int offset = 197;
    int frames = 1;
    mysprite_t *my_sprite = malloc(sizeof(mysprite_t));

    my_sprite->type = 2;
    my_sprite->radius = 80;
    my_sprite->velocity_x = 0.15f;
    my_sprite->velocity_y = 0.4f * ((rand() % 2) * 2 - 1);
    my_sprite->sprite = new_sprite(resources->textures[2]);
    delimit_mysprite(my_sprite, &box, offset, frames);
    sfSprite_setOrigin(my_sprite->sprite, origin);
    sfSprite_move(my_sprite->sprite, vect);
    append_sprite(resources, my_sprite);
}
