/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Destroys an instance of spawner_t.
*/

#include <stdlib.h>
#include "myhunter.h"

void destroy_spawner(spawner_t *spawner_c)
{
    for (int i = 0; i < 7; i++) {
        sfClock_destroy(spawner_c->spawnclocks[i]);
    }
    free(spawner_c->are_on);
    free(spawner_c);
}
