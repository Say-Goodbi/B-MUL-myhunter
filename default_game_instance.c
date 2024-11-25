/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Creates a game instance.
*/

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

instance_t *default_game_instance(void)
{
    instance_t *game = malloc(sizeof(instance_t));
    sfVideoMode mode = {1720, 1080, 32};

    game->window = sfRenderWindow_create(mode, "My Pasta Hunter",
        sfResize | sfClose, NULL);
    game->win_size = sfRenderWindow_getSize(game->window);
    game->resources = default_resources();
    game->status = 0;
    game->score_display = default_score_display();
    return game;
}
