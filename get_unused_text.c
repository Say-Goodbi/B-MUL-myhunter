/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Finds a not used instance of text and returns its adress.
*/

#include <stdio.h>
#include "myhunter.h"

mytext_t **get_unused_text(resources_t *resources)
{
    int i = 0;

    while (i < MAX_TEXTS && resources->texts[i] &&
        resources->texts[i]->age > 0)
        i++;
    if (i < MAX_TEXTS) {
        resources->texts[i]->age = 2;
        return &resources->texts[i];
    }
    return NULL;
}
