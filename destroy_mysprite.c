/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Ddestroys my sprite instance.
*/

#include <stddef.h>
#include <stdlib.h>
#include "resources.h"

#include <stdio.h>

void destroy_mysprite(mysprite_t **mysprite)
{
    if (*mysprite != NULL) {
        sfSprite_destroy((*mysprite)->sprite);
        free(*mysprite);
        *mysprite = NULL;
    }
}
