/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Increases difficulty when score rises.
*/

#include <stdio.h>
#include "myhunter.h"

static int is_enough_to_upstage(instance_t **game,
    int stage, int required_score)
{
    if ((*game)->spawner_c->are_on[stage] == '0' &&
        (*game)->resources->evolution_score >= required_score)
        return 1;
    else
        return 0;
}

void up_evolution_stage(instance_t **game)
{
    if (is_enough_to_upstage(game, 1, 2) == 1) {
        (*game)->spawner_c->are_on[1] = '1';
    }
    if (is_enough_to_upstage(game, 2, 4) == 1) {
        (*game)->spawner_c->are_on[2] = '1';
    }
    if (is_enough_to_upstage(game, 3, 8) == 1) {
        (*game)->spawner_c->are_on[3] = '1';
    }
    if (is_enough_to_upstage(game, 4, 20) == 1) {
        (*game)->spawner_c->are_on[4] = '1';
    }
    if (is_enough_to_upstage(game, 5, 50) == 1) {
        (*game)->spawner_c->are_on[5] = '1';
    }
}
