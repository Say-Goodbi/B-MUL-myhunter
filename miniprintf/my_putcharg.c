/*
** EPITECH PROJECT, 2024
** my_putchar
** File description:
** Function displaying a character.
*/

#include <unistd.h>
#include <stdarg.h>
#include "printf.h"

int my_putcharg(va_list ap)
{
    char c;

    if (ap) {
        c = va_arg(ap, int);
        return my_putchar(c);
    }
    return my_putchar('%');
}
