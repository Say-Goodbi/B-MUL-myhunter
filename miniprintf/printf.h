/*
** EPITECH PROJECT, 2024
** My_printf H
** File description:
** Header containing all necessary structs
** and prototypes for my_printf.
*/

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_
    #include <stdarg.h>
int my_strlen(char const *str);

typedef struct flag {
    char *name;
    int (*putf) (va_list);
} flag_t;

int my_putchar(char c);
int my_putcharg(va_list ap);
int my_put_nbr(va_list ap);
int my_putstr(va_list ap);
int mini_printf(char const *format, ...);
#endif
