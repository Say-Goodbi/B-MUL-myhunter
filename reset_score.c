/*
** EPITECH PROJECT, 2024
** my_hunter$
** File description:
** Set score variable to zero
*/

#include "myhunter.h"

void reset_score(instance_t *game)
{
    game->resources->evolution_score = 0;
    game->resources->score = 0;
    game->resources->evolution_stage = 1;
    destroy_spawner(game->spawner_c);
}
