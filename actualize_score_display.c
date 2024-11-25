/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Actualizes score display, by changing its value and sometimes origin.
*/

#include "myhunter.h"

int my_intlen(int nb)
{
    int l = 1;
    int e = 1;

    while (nb / l >= 10) {
        e++;
        l *= 10;
    }
    return e;
}

void change_string(sfText **text, int score)
{
    char score_str[18] = "Score : 000000000\n";

    for (int i = 16; i > 7; i--) {
        score_str[i] = score % 10 + 48;
        score /= 10;
    }
    sfText_setString((*text), score_str);
}

void actualize_score_display(instance_t **game)
{
    int score = (*game)->resources->score;
    int intlen = my_intlen(score);
    sfVector2f pos = sfText_getPosition((*game)->score_display);

    pos.x = 1500 - 50 * intlen;
    change_string(&(*game)->score_display, score);
    sfText_setOrigin((*game)->score_display, pos);
}
