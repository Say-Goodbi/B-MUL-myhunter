/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Starts the needed clocks for the game instance.
*/

#include "myhunter.h"

void launch_clocks(instance_t *game)
{
    game->actuclock = sfClock_create();
    game->moveclock = sfClock_create();
    game->gametime = sfClock_create();
}
