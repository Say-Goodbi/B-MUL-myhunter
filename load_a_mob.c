/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Let the duck be free !
*/

#include <stdlib.h>
#include <time.h>
#include "myhunter.h"

void load_mob(instance_t **game, int mobtype)
{
    srand(time(NULL) + rand());
    switch (mobtype) {
        case DUCK :
            load_duck((*game)->resources, - (float)(rand() % 80) - 40.0f,
                (float)(rand() % 700 + 200));
            break;
        case BOUNCYBALL :
            load_bouncyball((*game)->resources, (float)(rand() % 120 - 180),
                (float)(rand() % 700 + 200));
            break;
        default:
            load_duck((*game)->resources, - (float)(rand() % 80) - 40.0f,
            (float)(rand() % 700 + 200));
    }
}

void load_a_random_mob(instance_t **game, spawner_t **spawner, int i)
{
    int rand_value = rand() % 100;
    int s = 0;
    int spawnrates[6][4] = {
        {100, 0, 0, 0},
        {60, 40, 0, 0},
        {30, 35, 35, 0},
        {50, 50, 0, 0},
        {10, 10, 40, 40},
        {0, 50, 10, 40}
    };

    while (rand_value > spawnrates[i][s]) {
        rand_value -= spawnrates[i][s];
        s++;
    }
    srand(sfClock_getElapsedTime((*game)->gametime).microseconds);
    sfClock_restart((*spawner)->spawnclocks[i]);
    load_mob(game, s + 1);
    srand(time(NULL));
}
