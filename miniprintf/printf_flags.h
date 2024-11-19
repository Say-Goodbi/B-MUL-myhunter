/*
** EPITECH PROJECT, 2024
** My_printf H
** File description:
** Header containing all necessary structs
** and prototypes for my_printf.
*/

#ifndef MY_PRINTF_FLAGS_H_
    #define MY_PRINTF_FLAGS_H_
    #include "printf.h"
const flag_t all_flags[5] = {{"d", my_put_nbr}, {"i", my_put_nbr},
    {"s", my_putstr}, {"c", my_putcharg}, {"%", my_putcharg}};
#endif
