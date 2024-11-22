/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Creates a struct storing many clocks.
*/

#include <stdlib.h>
#include "myhunter.h"

spawner_t *new_spawner_c(void)
{
    spawner_t *spawn_c = malloc(sizeof(spawner_t));
    sfClock **spawnclocks = malloc(sizeof(sfClock *) * 7);

    for (int i = 0; i < 7; i++) {
        spawnclocks[i] = sfClock_create();
    }
    spawn_c->spawnclocks = spawnclocks;
    spawn_c->are_on = malloc(7);
    my_strcpy(spawn_c->are_on, "100000\0");
    spawn_c->lives = 5;
    return spawn_c;
}
