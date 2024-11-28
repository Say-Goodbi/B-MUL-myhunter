/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** When the mouse is moved.
*/

#include <math.h>
#include "myhunter.h"

void manage_mouse_move(sfMouseMoveEvent ev, instance_t *game)
{
    mysprite_t *startbutton = NULL;
    sfVector2f c_pos = {0};
    int radius = 0;
    sfIntRect *hold = NULL;

    if (game->status == MENU) {
        startbutton = game->resources->sprites[0];
        c_pos = sfSprite_getPosition(startbutton->sprite);
        radius = startbutton->radius;
        hold = &startbutton->box;
        if (sqrt(square((float)ev.x - c_pos.x) +
            square((float)ev.y - c_pos.y)) <= radius) {
            hold->top = 0;
        } else {
            hold->top = 420;
        }
    }
}
