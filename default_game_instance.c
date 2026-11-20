/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Creates a game instance.
*/

#include <math.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "myhunter.h"
#include "resources.h"

sfText *score_text(void)
{
    sfText *text = sfText_create();

    sfText_setFillColor(text, sfTransparent);
    sfText_setOutlineColor(text, sfCyan);
}

// Fixed 1720x1080 world shown letterboxed in a window of any size.
void fit_view(sfRenderWindow *window, sfVector2u size)
{
    float ratio = (float)size.x / size.y / (1720.0f / 1080.0f);
    sfFloatRect rect = {0, 0, 1, 1};
    sfView *view = sfView_createFromRect((sfFloatRect){0, 0, 1720, 1080});

    if (ratio > 1) {
        rect.width = 1 / ratio;
        rect.left = (1 - rect.width) / 2;
    } else {
        rect.height = ratio;
        rect.top = (1 - rect.height) / 2;
    }
    sfView_setViewport(view, rect);
    sfRenderWindow_setView(window, view);
    sfView_destroy(view);
}

instance_t *default_game_instance(void)
{
    instance_t *game = malloc(sizeof(instance_t));
    sfVideoMode desk = sfVideoMode_getDesktopMode();
    float k = fminf(fminf(0.9f * desk.width / 1720, 0.9f * desk.height / 1080), 1);
    sfVideoMode mode = {1720 * k, 1080 * k, 32};

    game->window = sfRenderWindow_create(mode, "My Pasta Hunter",
        sfResize | sfClose, NULL);
    fit_view(game->window, (sfVector2u){mode.width, mode.height});
    game->win_size = sfRenderWindow_getSize(game->window);
    game->resources = default_resources();
    game->status = 0;
    game->score_display = default_score_display();
    return game;
}

//    sfRenderWindow_setFramerateLimit(game->window, 60);
