/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** fkoezij
*/

#include "myhunter.h"

void delete_gone_sprite(mysprite_t **my_sprites, int i, sfVector2f pos)
{
    if (pos.x > 1900 || pos.x < -100)
        destroy_mysprite(&my_sprites[i]);
}
