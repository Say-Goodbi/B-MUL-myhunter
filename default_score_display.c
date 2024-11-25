/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Creates the corresponding sfText for rendering score.
*/

#include <stdlib.h>
#include "myhunter.h"

sfText *default_score_display(void)
{
    sfFont *font = sfFont_createFromFile("OverLight.otf");
    sfText *sd = sfText_create();
    sfVector2f pos = {1500, 20};
    char *score_str = malloc(50);

    score_str = "Score : ";
    sfText_setFont(sd, font);
    sfText_setPosition(sd, pos);
    sfText_setString(sd, "Scoreeeee");
    sfText_setCharacterSize(sd, 50);
    return sd;
}
