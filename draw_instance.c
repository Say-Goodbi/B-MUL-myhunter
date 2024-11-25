/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Clears and display the render window, then display all the sprites.
*/

#include <stddef.h>
#include "myhunter.h"

void draw_instance(instance_t *game)
{
    sfRenderWindow_clear(game->window, sfBlack);
    draw_sprites(game->window, game->resources->sprites);
    draw_texts(game->window, game->resources->texts);
    actualize_score_display(&game);
    sfRenderWindow_drawText(game->window, game->score_display, NULL);
    sfRenderWindow_display(game->window);
}
