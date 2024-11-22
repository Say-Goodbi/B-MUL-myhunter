/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Appends a given sfText to the great texts array.
*/

#include "myhunter.h"

void append_text(resources_t *resources, sfText *text)
{
    int i = 0;

    while (i < MAX_TEXTS && resources->texts[i] != NULL)
        i++;
    resources->texts[i] = text;
}
