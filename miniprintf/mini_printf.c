/*
** EPITECH PROJECT, 2024
** miniprintf
** File description:
** Same as printf function but
** only covers d, i, s, c and % flags.
*/

#include <unistd.h>
#include <stdarg.h>
#include "printf_flags.h"

/* Returns either length of corresponding flag,
  or -1 if it's not the flag */
int flag_length(char *flag, char const *str)
{
    int i = 0;

    while (flag[i]) {
        if (flag[i] == str[i + 1]) {
            i++;
        } else {
            return -1;
        }
    }
    return i;
}

int print_arg(flag_t f, va_list ap, int *i)
{
    *i += my_strlen(f.name);
    if (f.name[0] == '%') {
        return f.putf(0);
    } else {
        return f.putf(ap);
    }
    return 0;
}

int test_arg_type(const char *format, int *i, va_list ap)
{
    for (int f = 0; f < 5; f++) {
        if (flag_length(all_flags[f].name, format + *i) > 0) {
            return print_arg(all_flags[f], ap, i);
        }
    }
    return 0;
}

int mini_printf(const char *format, ...)
{
    int i = 0;
    int bytes = 0;
    va_list ap;

    va_start(ap, format);
    while (format[i]) {
        if (format[i] == '%') {
            bytes += test_arg_type(format, &i, ap);
        } else {
            bytes += my_putchar(format[i]);
        }
        i++;
    }
    return bytes;
}
