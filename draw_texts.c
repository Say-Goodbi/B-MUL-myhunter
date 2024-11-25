/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Draws all desired texts.
*/

#include <stdio.h>
#include "myhunter.h"

void draw_a_text(sfRenderWindow *window, mytext_t **mytext)
{
    sfRenderWindow_drawText(window, (*mytext)->text, NULL);
    (*mytext)->age += 1;
    if ((*mytext)->age % 30 == 0) {
        sfText_setCharacterSize((*mytext)->text,
            sfText_getCharacterSize((*mytext)->text) + 1);
    }
    if ((*mytext)->age > 2000) {
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
