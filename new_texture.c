/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Returns a texture from a given filepath.
*/

#include <stdlib.h>
#include "myhunter.h"

sfTexture *new_texture(char *texturepath)
{
    sfTexture *texture = sfTexture_createFromFile(texturepath, NULL);

    if (!texture)
        exit(84);
    return texture;
}
