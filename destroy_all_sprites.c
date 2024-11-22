/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Destroys all active sprites.
*/

#include "myhunter.h"

void destroy_all_sprites(resources_t *resources)
{
    for (int i = 0; i < MAX_SPRITES; i++)
        destroy_mysprite(&resources->sprites[i]);
}
