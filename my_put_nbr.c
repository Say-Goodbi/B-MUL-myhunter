/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** jhvh
*/

#include <unistd.h>

void my_putchar(char c, int fd)
{
    write(fd, &c, 1);
}

void my_put_nbr(int nb, int fd)
{
    int y = 1;

    while (nb / y >= 10) {
        y = y * 10;
    }
    while (y != 1) {
        my_putchar(48 + (nb / y) % 10, fd);
        y = y / 10;
    }
    my_putchar(48 + nb % 10, fd);
}
