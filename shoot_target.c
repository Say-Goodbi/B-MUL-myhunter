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

int shoot_target(sfMouseButtonEvent ev, mysprite_t **my_sprites, int i)
{
    sfVector2f current_pos = sfSprite_getPosition(my_sprites[i]->sprite);

    current_pos.x += my_sprites[i]->offset / 2;
    current_pos.y += my_sprites[i]->offset / 2;
    if (my_sprites[i]->type == 1)
        if (sqrt(square((float)ev.x - current_pos.x) +
            square((float)ev.y - current_pos.y)) <= 50)
            destroy_mysprite(&my_sprites[i]);
}
