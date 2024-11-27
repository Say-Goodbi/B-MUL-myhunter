/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Takes input of a pressed key.
*/

#include "myhunter.h"

void manage_key_pressed(sfKeyEvent ev, instance_t *game)
{
    if (ev.code == sfKeyQ && ev.control && game->status == 1) {
        quit_party(game);
    }
    if (ev.code == sfKeyM && ev.control && game->status == 1) {
        change_music(&game);
    }
}
