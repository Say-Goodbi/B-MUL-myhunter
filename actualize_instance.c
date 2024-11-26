/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Actualizes game, and sprites.
*/

#include "myhunter.h"

void run_actualize_instance(instance_t *game)
{
    int actu_ms = sfClock_getElapsedTime(game->actuclock).microseconds;
    int move_ms = sfClock_getElapsedTime(game->moveclock).microseconds;
    sfMusic *curr_m = game->resources->musics[0];

    if (actu_ms > 300000) {
        actualize_sprites(game->resources->sprites);
        sfClock_restart(game->actuclock);
    }
    if (move_ms > 1000 && game->status == 1) {
        move_sprites(game->resources->sprites, game->spawner_c);
        sfClock_restart(game->moveclock);
    }
    if ((sfMusic_getStatus(curr_m) == sfPaused ||
        sfMusic_getStatus(curr_m) == sfStopped) && game->status == 1) {
        sfMusic_play(game->resources->musics[0]);
    } else if (game->status == 2 &&
        sfMusic_getStatus(curr_m) == sfPlaying) {
        sfMusic_pause(game->resources->musics[0]);
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
