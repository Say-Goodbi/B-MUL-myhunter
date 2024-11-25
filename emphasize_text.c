/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Change the style of a sfText when best score is made.
*/

#include "myhunter.h"

void emphasize_text(sfText *text)
{
    sfColor filling = sfYellow;
    sfColor outline = sfRed;
    float out_thickness = 2.0f;

    sfText_setFillColor(text, filling);
    sfText_setOutlineColor(text, outline);
    sfText_setOutlineThickness(text, out_thickness);
}
