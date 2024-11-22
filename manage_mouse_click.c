/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Manages mouse click events.
*/

#include "myhunter.h"
#include "stdio.h"

void is_shot(int shoot_res, sfMouseButtonEvent ev, instance_t **game, int type)
{
    if (shoot_res > 0) {
        if (type == 0)
            launch_run(game);
        else {
            up_evolution_stage(game);
            show_scored(shoot_res, ev, game);
        }
    }
}

void manage_mouse_click(sfMouseButtonEvent event, instance_t *game)
{
    int shoot_res = 0;
    int stype = 0;
    mysprite_t **my_sprites = game->resources->sprites;

    for (int i = 0; i < MAX_SPRITES; i++) {
        if (my_sprites[i] != NULL && my_sprites[i]->type >= 0) {
            stype = my_sprites[i]->type;
            shoot_res += shoot_target(event, &game, i);
            is_shot(shoot_res, event, &game, stype);
        }
    }
}
