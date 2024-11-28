/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Changes the game state by clicking on the menu sprite.
*/

#include <stdio.h>
#include "myhunter.h"

void launch_run(instance_t **game)
{
    destroy_menu_sprites((*game)->resources);
    (*game)->status = 1;
    sfText_setFillColor((*game)->score_display, sfWhite);
    sfText_setOutlineThickness((*game)->score_display, 0);
    (*game)->spawner_c = new_spawner_c();
    load_duck((*game)->resources, -20.0f, 500.0f);
}
