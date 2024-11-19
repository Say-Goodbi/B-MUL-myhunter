/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Manages mouse click events.
*/

#include "myhunter.h"
#include "stdio.h"

void manage_mouse_click(sfMouseButtonEvent event, instance_t *game)
{
    mysprite_t **my_sprites = game->resources->sprites;

    printf("Mouse x=%d y=%d\n", event.x, event.y);
    for (int i = 0; i < MAX_SPRITES; i++) {
        if (my_sprites[i] != NULL && my_sprites[i]->type == 1)
            shoot_target(event, my_sprites, i);
    }
    load_duck(game->resources, (float)(event.x), (float)(event.y));
}
