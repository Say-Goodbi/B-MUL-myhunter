/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Creates and returns a new sprite, with the given texture on it.
*/

#include <stdlib.h>
#include "myhunter.h"

sfSprite *new_sprite(sfTexture *texture)
{
    sfSprite *sprite = sfSprite_create();

    sfSprite_setTexture(sprite, texture, sfTrue);
    return sprite;
}
