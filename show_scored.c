/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Creates text when a target is shoot.
*/

#include "myhunter.h"

void show_scored(int shoot_res, sfMouseButtonEvent event,
    instance_t **game)
{
    mytext_t *mtext = NULL;
    sfText *text = NULL;
    sfVector2f pos = {(float)(event.x), (float)(event.y)};
    char score_str[7] = "(+ .)";

    if (shoot_res > 0) {
        mtext = *get_unused_text((*game)->resources);
        text = mtext->text;
        mtext->age = 2;
        score_str[3] = shoot_res + 48;
        sfText_setPosition(text, pos);
        sfText_setString(text, score_str);
        sfText_setCharacterSize(text, 2);
        (*game)->resources->score += shoot_res;
        (*game)->resources->evolution_score += shoot_res;
        actualize_score_display(game);
    }
}
