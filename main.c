/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Main
*/

#include "unistd.h"
#include <stdlib.h>
#include "myhunter.h"
#include "resources.h"

void my_put_str(char *str)
{
    while (str != NULL && str[0] != '\0') {
        write(1, str, 1);
        str += 1;
    }
}

int show_usage(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        fs_cat_x_bytes("info.txt", 580);
        return 1;
    }
    return 0;
}

int run_iteration(instance_t **game)
{
    if ((*game)->status > 0) {
        if ((*game)->status == 1)
            spawner_clocks(game);
        run_actualize_instance(*game);
        if ((*game)->spawner_c->lives < 1)
            quit_party(*game);
    }
    draw_instance(*game);
}

int main(int ac, char **av)
{
    int h = show_usage(ac, av);
    instance_t *game = h == 1 ? NULL : default_game_instance();

    if (game == NULL)
        return 0;
    launch_clocks(game);
    load_menu(game->resources);
    while (sfRenderWindow_isOpen(game->window)) {
        while (sfRenderWindow_pollEvent(game->window, &game->event)) {
            analyse_events(game);
        }
        run_iteration(&game);
    }
    destroy_instance(game);
}
