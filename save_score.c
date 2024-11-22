/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Create a file storing the best score ever.
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "myhunter.h"

void save_score(instance_t *game)
{
    int fd = open("score", O_CREAT | O_RDONLY, 0666);
    int new_score = game->resources->score;
    int best_score = fs_get_number_from_first_line(fd);

    if (new_score > best_score) {
        close(fd);
        fd = open("score", O_CREAT | O_APPEND | O_WRONLY | O_TRUNC, 0666);
        my_put_nbr(new_score, fd);
    }
    close(fd);
}
