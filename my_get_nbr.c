/*
** EPITECH PROJECT, 2024
** Setting Up
** File description:
** My get nbr func
*/

int is_numeric(char c)
{
    return (c > 47 && c < 58) ? 1 : 0;
}

int my_get_nbr(char *str)
{
    int i = 0;
    int nbr = 0;

    while (is_numeric(str[i])) {
        nbr *= 10;
        nbr += str[i] - '0';
        i++;
    }
    return nbr;
}
