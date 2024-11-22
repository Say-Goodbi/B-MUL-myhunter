/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Draws all desired texts.
*/

#include <stdio.h>
#include "myhunter.h"

void draw_a_text(sfRenderWindow *window, sfText *text)
{
    if (sfText_getCharacterSize(text) > 0) {
        sfText_setPosition(text, (sfVector2f){10, 10});
        sfRenderWindow_drawText(window, text, NULL);
    }
}

void draw_texts(sfRenderWindow *window, sfText **texts)
{
    for (int i = 0; i < MAX_TEXTS; i++) {
        if (texts[i] != NULL) {
            draw_a_text(window, texts[i]);
        }
    }
}
