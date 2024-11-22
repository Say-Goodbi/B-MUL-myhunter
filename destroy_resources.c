/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Destroys resources
*/

#include "myhunter.h"

void destroy_resources(resources_t *resources)
{
    for (int i = 0; i < MAX_MUSICS; i++)
        if (resources->musics[i])
            sfMusic_destroy(resources->musics[i]);
    destroy_all_sprites(resources);
    for (int i = 0; i < NUM_TEXTURES; i++)
        if (resources->textures[i])
            sfTexture_destroy(resources->textures[i]);
    for (int i = 0; i < MAX_TEXTS; i++)
        if (resources->texts[i])
            sfText_destroy(resources->texts[i]);
}
