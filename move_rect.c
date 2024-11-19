/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** PastaHunt gonna go crazy
*/

#include <stdio.h>
#include "myhunter.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    if (rect->left + offset >= max_value)
        rect->left = -offset;
    rect->left += offset;
}
