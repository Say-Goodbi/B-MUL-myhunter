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
        case sfEvtMouseMoved :
            return manage_mouse_move(game->event.mouseMove, game);
        case sfEvtMouseButtonPressed :
            return manage_mouse_click(game->event.mouseButton, game);
        case sfEvtKeyPressed :
            return manage_key_pressed(game->event.key, game);
        case sfEvtClosed :
            return close_window(game->window);
        case sfEvtLostFocus :
            return pause_game(game);
        case sfEvtGainedFocus :
            return resume_game(game);
    }
}
