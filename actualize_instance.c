/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Actualizes game, and sprites.
*/

#include "myhunter.h"

void actualize_instance(instance_t *game)
{
    int actu_ms = sfClock_getElapsedTime(game->actuclock).microseconds;
    int move_ms = sfClock_getElapsedTime(game->moveclock).microseconds;

    if (actu_ms > 300000) {
        actualize_sprites(game->resources->sprites);
        sfClock_restart(game->actuclock);
    }
    if (move_ms > 1000 && sfRenderWindow_hasFocus(game->window)) {
        move_sprites(game->resources->sprites);
        sfClock_restart(game->moveclock);
    }
}
