/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Quit party and reload menu.
*/

#include "myhunter.h"

void quit_party(instance_t *game)
{
    destroy_all_sprites(game->resources);
    game->status = 0;
    load_menu(game->resources);
    save_score(game);
    change_string_menu(&(game->score_display),
        game->resources->best_score);
    reset_score(game);
    sfMusic_pause(game->resources->musics[0]);
}
