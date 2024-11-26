/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Draws all desired texts.
*/

#include <stdio.h>
#include "myhunter.h"

void color_text(mytext_t **mytext)
{
    sfColor filling = sfText_getFillColor((*mytext)->text);

    if ((*mytext)->age % 90 == 0) {
        filling.g -= 1;
        filling.a -= 1;
        sfText_setFillColor((*mytext)->text, filling);
    }
}

void draw_a_text(sfRenderWindow *window, mytext_t **mytext)
{
    sfVector2f move = {0, -0.04};
    sfColor filling = sfText_getFillColor((*mytext)->text);

    sfRenderWindow_drawText(window, (*mytext)->text, NULL);
    (*mytext)->age += 1;
    sfText_move((*mytext)->text, move);
    if ((*mytext)->age % 30 == 0) {
        if ((*mytext)->age < 2000) {
            sfText_setCharacterSize((*mytext)->text,
                sfText_getCharacterSize((*mytext)->text) + 1);
        }
    }
    color_text(mytext);
    if ((*mytext)->age > 20000) {
        sfText_setCharacterSize((*mytext)->text, 1);
        (*mytext)->age = 0;
    }
}

void draw_texts(sfRenderWindow *window, mytext_t **texts)
{
    for (int i = 0; i < MAX_TEXTS; i++) {
        if (texts[i]->age > 1) {
            draw_a_text(window, &texts[i]);
        }
    }
}
