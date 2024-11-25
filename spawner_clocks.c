/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Spawns quite randomly enemies
*/

#include <stddef.h>
#include <stdlib.h>
#include <time.h>
#include "myhunter.h"

#include <stdio.h>

void spawner_clocks(instance_t **game)
{
    spawner_t **spawner = &(*game)->spawner_c;
    long int ms = 0;

    for (int i = 0; (*spawner)->are_on[i] == '1' && i < 7; i++) {
        ms = sfClock_getElapsedTime((*spawner)->spawnclocks[i]).microseconds;
        srand(rand());
        if ((ms / 1000000 > 2 && rand() % 100 > 15) || ms / 1000000 > 6)
            load_a_random_mob(game, spawner, i);
    }
}
