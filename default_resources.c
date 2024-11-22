/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Returns a struct resources with predefined values.
*/

#include <stdlib.h>
#include <stddef.h>
#include "myhunter.h"
#include "resources.h"

static sfMusic **default_musics(void)
{
    sfMusic **musics = malloc(MAX_MUSICS * sizeof(sfMusic *));

    for (int i = 0; i < MAX_MUSICS; i++)
        musics[i] = NULL;
    musics[0] = sfMusic_createFromFile("ABT_Remix.ogg");
    return musics;
}

static mysprite_t **default_sprites(void)
{
    mysprite_t **sprites = malloc(MAX_SPRITES * sizeof(mysprite_t *));

    for (int i = 0; i < MAX_SPRITES; i++)
        sprites[i] = NULL;
    return sprites;
}

static sfTexture **default_textures(void)
{
    sfTexture **textures = malloc(NUM_TEXTURES * sizeof(sfTexture *));

    for (int i = 0; i < NUM_TEXTURES; i++)
        textures[i] = sfTexture_createFromFile(TEXTUREPATHS[i], NULL);
    return textures;
}

static sfText **default_texts(void)
{
    sfText **texts = malloc(MAX_TEXTS * sizeof(sfText *));
    sfFont *font = sfFont_createFromFile("OverLight.otf");

    for (int i = 0; i < MAX_TEXTS; i++)
        texts[i] = NULL;
    texts[0] = sfText_create();
    sfText_setFont(texts[0], font);
    sfText_setString(texts[0], "(+ %d)");
    sfText_setCharacterSize(texts[0], 0);
    return texts;
}

resources_t *default_resources(void)
{
    resources_t *resources = malloc(sizeof(resources_t));

    resources->score = 0;
    resources->evolution_score = 0;
    resources->texts = default_texts();
    resources->textures = default_textures();
    resources->sprites = default_sprites();
    resources->musics = default_musics();
    resources->evolution_stage = 1;
    return resources;
}
