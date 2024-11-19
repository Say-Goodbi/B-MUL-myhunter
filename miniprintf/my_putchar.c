/*
** EPITECH PROJECT, 2024
** my_putchar
** File description:
** Function displaying a character.
*/

#include <unistd.h>

int my_putchar(char c)
{
    return write(1, &c, 1);
}
