/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Takes in events.
*/

#include "myhunter.h"

void analyse_events(instance_t *game)
{
    sfEventType type = game->event.type;

    switch (type) {
        case sfEvtMouseButtonPressed :
            return manage_mouse_click(game->event.mouseButton, game);
        case sfEvtClosed :
            return close_window(game->window);
    }
}
