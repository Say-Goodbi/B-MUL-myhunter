/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Creates a game instance.
*/

#include <stdlib.h>
#include "myhunter.h"
#include "resources.h"

instance_t *default_game_instance(void)
{
    instance_t *game = malloc(sizeof(instance_t));
    sfVideoMode mode = {1720, 1080, 32};

    game->window = sfRenderWindow_create(mode, "My Pasta Hunter",
        sfResize | sfClose, NULL);
    game->win_size = sfRenderWindow_getSize(game->window);
    game->resources = default_resources();
    game->status = 0;
    return game;
}
