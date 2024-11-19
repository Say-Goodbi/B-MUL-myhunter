/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Appends a given sprite to the great sprites array.
*/

#include "myhunter.h"

void append_sprite(resources_t *resources, mysprite_t *mysprite)
{
    int i = 0;

    while (i < MAX_SPRITES && resources->sprites[i] != NULL)
        i++;
    resources->sprites[i] = mysprite;
}
