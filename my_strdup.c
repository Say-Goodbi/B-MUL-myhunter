/*
** EPITECH PROJECT, 2024
** my_strdup
** File description:
** Function that allocates memory,
** and copies the string given as argument in it.
*/

#include <stdlib.h>
#include "myhunter.h"

int my_strlen(char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        i++;
    }
    return i;
}

char *my_strdup(char const *src)
{
    int len = my_strlen(src);
    char *dest = malloc(sizeof(char) * (len + 1));

    for (int i = 0; i < len; i++) {
        dest[i] = src[i];
    }
    dest[len] = '\0';
    return dest;
}
