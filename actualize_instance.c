/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Actualizes game, and sprites.
*/

#include <math.h>
#include "myhunter.h"

void run_actualize_instance(instance_t *game)
{
    int actu_ms = sfClock_getElapsedTime(game->actuclock).microseconds;
    int move_ms = sfClock_getElapsedTime(game->moveclock).microseconds;
    sfMusic *curr_m = game->resources->musics[game->resources->current_music];

    if (actu_ms > 300000) {
        actualize_sprites(game->resources->sprites);
        sfClock_restart(game->actuclock);
    }
    if (move_ms > 1000 && game->status == 1) {
        // one step per elapsed ms (capped) so speed doesn't depend on fps
        for (int n = fmin(move_ms / 1000, 50); n > 0; n--)
            move_sprites(game->resources->sprites, game->spawner_c);
        sfClock_restart(game->moveclock);
    }
    if ((sfMusic_getStatus(curr_m) == sfPaused ||
        sfMusic_getStatus(curr_m) == sfStopped) && game->status == 1) {
        sfMusic_play(curr_m);
    } else if (game->status == 2 &&
        sfMusic_getStatus(curr_m) == sfPlaying) {
        sfMusic_pause(curr_m);
    }
}

void idle_actualize_instance(instance_t *game)
{
    int actu_ms = sfClock_getElapsedTime(game->actuclock).microseconds;
    int move_ms = sfClock_getElapsedTime(game->moveclock).microseconds;

    if (actu_ms > 300000) {
        actualize_sprites(game->resources->sprites);
        sfClock_restart(game->actuclock);
    }
}
