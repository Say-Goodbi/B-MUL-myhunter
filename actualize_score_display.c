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

void change_string_menu(sfText **text, int best_score)
{
    sfVector2f pos = {1400, 20};
    char score_str[23] = "Best score : 000000000\0";

    for (int i = 16; i > 7; i--) {
        score_str[i + 5] = best_score % 10 + 48;
        best_score /= 10;
    }
    sfText_setString(*text, score_str);
    sfText_setPosition(*text, pos);
}

void change_string_game(sfText **text, int score, int bscore)
{
    sfVector2f pos = {1500, 20};
    char score_str[18] = "Score : 000000000\0";

    for (int i = 16; i > 7; i--) {
        score_str[i] = score % 10 + 48;
        score /= 10;
    }
    if (score > bscore)
        sfText_setFillColor(*text, sfYellow);
    else
        sfText_setFillColor(*text, sfWhite);
    sfText_setString(*text, score_str);
    sfText_setPosition(*text, pos);
}

void actualize_score_display(instance_t **game)
{
    int score = (*game)->resources->score;
    int best_score = (*game)->resources->best_score;
    int intlen = my_intlen(score);

    if ((*game)->status == 1)
        change_string_game(&(*game)->score_display, score, best_score);
    else
        change_string_menu(&(*game)->score_display, best_score);
}
