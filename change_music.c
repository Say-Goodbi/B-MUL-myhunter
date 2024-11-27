/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Change current music.
*/

#include "myhunter.h"

void change_music(instance_t **game)
{
    int *curr = &(*game)->resources->current_music;

    sfMusic_stop((*game)->resources->musics[*curr]);
    (*curr) += 1;
    if ((*curr) == 3)
        (*curr) = 0;
    sfMusic_play((*game)->resources->musics[*curr]);
}
