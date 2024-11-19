/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Put values to mySprite structure.
*/

#include "myhunter.h"

void delimit_mysprite(mysprite_t *mysprite,
    sfIntRect *box, int offset, int frames)
{
    mysprite->box = *box;
    mysprite->offset = offset;
    mysprite->frames = frames;
}
