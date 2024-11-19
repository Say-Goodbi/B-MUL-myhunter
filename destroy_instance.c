/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Destroys the game instance.
*/

#include "myhunter.h"
#include "resources.h"

void destroy_instance(instance_t *game)
{
    destroy_resources(game->resources);
    sfClock_destroy(game->moveclock);
    sfClock_destroy(game->actuclock);
    sfRenderWindow_destroy(game->window);
}
