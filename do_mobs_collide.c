/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Check collisions
*/

#include <math.h>
#include "myhunter.h"

float square(float nb)
{
    return nb * nb;
}

int do_mobs_collide(sfMouseButtonEvent ev, mysprite_t **my_sprite)
{
    sfVector2f c_pos = sfSprite_getPosition((*my_sprite)->sprite);
    int radius = (*my_sprite)->radius;

    if ((*my_sprite)->type < 3) {
        if (sqrt(square((float)ev.x - c_pos.x) +
            square((float)ev.y - c_pos.y)) <= radius) {
            return 1;
        }
    } else {
        if (ev.x - c_pos.x > 0 && ev.x - c_pos.x < 127 &&
            ev.y - c_pos.y > 0 && ev.y - c_pos.y < 70) {
            return 1;
        }
    }
    return 0;
}
