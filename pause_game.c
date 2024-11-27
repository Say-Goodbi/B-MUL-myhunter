/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Pauses game when focus is lost.
*/

#include "myhunter.h"

void pause_game(instance_t *game)
{
    if (game->status == 1) {
        game->status = 2;
    }
}
