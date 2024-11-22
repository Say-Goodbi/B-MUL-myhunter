/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Rresumes game when focus is gained.
*/

#include "myhunter.h"

void resume_game(instance_t *game)
{
    if (game->status == 2)
        game->status = 1;
}
