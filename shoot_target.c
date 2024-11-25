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

int do_mobs_collide(sfMouseButtonEvent ev, mysprite_t **my_sprite)
{
    sfVector2f current_pos = sfSprite_getPosition((*my_sprite)->sprite);
    int radius = (*my_sprite)->radius;

    if (sqrt(square((float)ev.x - current_pos.x) +
            square((float)ev.y - current_pos.y)) <= radius) {
        return 1;
    }
    return 0;
}

int shoot_target(sfMouseButtonEvent ev, instance_t **game, int i)
{
    mysprite_t **my_sprite = &(*game)->resources->sprites[i];
    int type = (*my_sprite)->type;
    char score = 0;

    if (do_mobs_collide(ev, my_sprite) == 1) {
        destroy_mysprite(my_sprite);
        return type == 0 ? 1 : type;
    }
    return 0;
}
