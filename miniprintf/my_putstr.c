/*
** EPITECH PROJECT, 2024
** my_putstr
** File description:
** A function displaying a string characters, one by one.
*/

#include <unistd.h>
#include <stdarg.h>
#include "printf.h"

int my_putstr(va_list ap)
{
    char *str = va_arg(ap, char *);
    int i = 0;

    while (*(str + i)) {
        my_putchar(*(str + i));
        i++;
    }
    return i;
}
