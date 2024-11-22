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
    sfText *text = NULL;
    sfVector2f pos = {(float)(event.x), (float)(event.y)};
    char score_str[7] = "(+ .)";

    if (shoot_res > 0) {
        text = sfText_copy((*game)->resources->texts[0]);
        score_str[3] = shoot_res + 48;
        sfText_setPosition(text, pos);
        sfText_setString(text, score_str);
        sfText_setCharacterSize(text, 100);
        append_text((*game)->resources, text);
        (*game)->resources->score += 1;
        (*game)->resources->evolution_score += 1;
    }
}
