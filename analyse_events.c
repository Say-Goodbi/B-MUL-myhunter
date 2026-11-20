/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Takes in events.
*/

#include "myhunter.h"

static sfVector2i to_world(instance_t *game, int x, int y)
{
    sfVector2f p = sfRenderWindow_mapPixelToCoords(game->window,
        (sfVector2i){x, y}, NULL);

    return (sfVector2i){p.x, p.y};
}

void analyse_events(instance_t *game)
{
    sfEventType type = game->event.type;
    sfVector2i w = {0};

    switch (type) {
        case sfEvtResized :
            return fit_view(game->window, (sfVector2u){
                game->event.size.width, game->event.size.height});
        case sfEvtMouseMoved :
            w = to_world(game, game->event.mouseMove.x,
                game->event.mouseMove.y);
            game->event.mouseMove.x = w.x;
            game->event.mouseMove.y = w.y;
            return manage_mouse_move(game->event.mouseMove, game);
        case sfEvtMouseButtonPressed :
            w = to_world(game, game->event.mouseButton.x,
                game->event.mouseButton.y);
            game->event.mouseButton.x = w.x;
            game->event.mouseButton.y = w.y;
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
