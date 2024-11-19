/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Creates and returns a window.
*/

#include "myhunter.h"
#include <stdlib.h>

sfRenderWindow *new_window(void)
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow *window = malloc(sizeof(sfRenderWindow *));

    window = sfRenderWindow_create(mode, "SFML window",
        sfResize | sfClose, NULL);
    if (!window)
        exit(84);
    return window;
}
