/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Main
*/

#include <stdio.h>
#include "myhunter.h"
#include "resources.h"

int main(void)
{
    instance_t *game = default_game_instance();

    launch_clocks(game);
    while (sfRenderWindow_isOpen(game->window)) {
        while (sfRenderWindow_pollEvent(game->window, &game->event)) {
            analyse_events(game);
        }
        actualize_instance(game);
        draw_instance(game);
    }
    destroy_instance(game);
    return 0;
}
