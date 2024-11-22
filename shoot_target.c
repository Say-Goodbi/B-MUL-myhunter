/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Returns if the click was onto the sprite or not.
*/

#include <stdio.h>
#include <math.h>
#include "myhunter.h"

float square(float nb)
{
    return nb * nb;
}

int shoot_target(sfMouseButtonEvent ev, instance_t **game, int i)
{
    mysprite_t **my_sprite = &(*game)->resources->sprites[i];
    sfVector2f current_pos = sfSprite_getPosition((*my_sprite)->sprite);
    char score = 0;

    current_pos.x += (*my_sprite)->offset / 2;
    current_pos.y += (*my_sprite)->offset / 2;
    if ((*my_sprite)->type <= 1) {
        if (sqrt(square((float)ev.x - current_pos.x) +
            square((float)ev.y - current_pos.y)) <= 50) {
            destroy_mysprite(my_sprite);
            return 1;
        }
    }
    return 0;
}
