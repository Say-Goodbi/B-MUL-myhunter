/*
** EPITECH PROJECT, 2024
** BsSettingUp
** File description:
** Returns positive number written of the first line,
** or -1 if an error occured.
*/

#include <unistd.h>


int my_strlen_to(char *str, char c)
{
    int len = 0;

    while (str[len] != '\0' && str[len] != c) {
        len++;
    }
    return len;
}

int is_digit(char c)
{
    return c > 47 && c < 58 ? 1 : 0;
}

int get_nbr(char *str)
{
    int nb = 0;
    int len = my_strlen_to(str, '\n');

    for (int i = 0; i < len; i++) {
        if (is_digit(str[i]) == 1) {
            nb *= 10;
            nb += str[i] - '0';
        } else
            return -1;
    }
    return nb != 0 ? nb : -1;
}

int fs_get_number_from_first_line(int fd)
{
    int i = 0;
    int rvalue = 0;
    char buffer[2];
    char str[100] = {0};

    if (fd == -1)
        return -1;
    do {
        buffer[0] = '\0';
        rvalue = read(fd, buffer, 1);
        if (buffer[0] != '\n')
            str[i] = buffer[0];
        i++;
    } while (rvalue > 0 && buffer[0] != '\n' && buffer[0] != '\0');
    str[i] = '\0';
    return get_nbr(str);
}
