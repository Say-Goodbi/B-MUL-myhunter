/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** A function that displays given number as parameter.
*/

#include <unistd.h>
#include <stdarg.h>
#include "printf.h"

int my_put_nbr(va_list ap)
{
    int nb = va_arg(ap, int);
    int bytes = 0;
    int l = 1;

    if (nb < 0) {
        bytes += my_putchar('-');
        nb = - nb;
    }
    while (l <= nb) {
        l = l * 10;
    }
    if (nb != 0) {
        l = l / 10;
    }
    while (l >= 1) {
        bytes += my_putchar(nb / l + 48);
        nb = nb - (nb / l) * l;
        l = l / 10;
    }
    return bytes;
}
