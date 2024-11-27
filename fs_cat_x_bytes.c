/*
** EPITECH PROJECT, 2024
** BsSettingUp
** File description:
** Displays the first x bytes of a file passed as parameter.
*/

#include <fcntl.h>
#include <unistd.h>

void fs_cat_x_bytes(char const *filepath, int x)
{
    char buff[x + 1];
    int size = x;
    int fd = open(filepath, O_RDONLY);

    for (int i = 0; i <= x; i++)
        buff[i] = '\0';
    size = read(fd, buff, size);
    close(fd);
    write(1, buff, size);
}
