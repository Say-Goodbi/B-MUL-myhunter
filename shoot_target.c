/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Returns if the click was onto the sprite or not.
*/

#include <stdio.h>
#include "myhunter.h"

int shoot_target(sfMouseButtonEvent ev, instance_t **game, int i)
{
    mysprite_t **my_sprite = &(*game)->resources->sprites[i];
    int type = (*my_sprite)->type;
    char score = 0;

    if (do_mobs_collide(ev, my_sprite) == 1 && (*my_sprite)->alive == 1) {
        destroy_mysprite(my_sprite);
        return type == 0 ? 1 : type;
    }
    return 0;
}
