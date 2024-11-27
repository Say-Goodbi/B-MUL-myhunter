/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Returns a struct resources with predefined values.
*/

#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include "myhunter.h"
#include "resources.h"

static sfMusic **default_musics(void)
{
    sfMusic **musics = malloc(MAX_MUSICS * sizeof(sfMusic *));

    for (int i = 0; i < MAX_MUSICS; i++)
        musics[i] = NULL;
    musics[0] = sfMusic_createFromFile("ABT_Remix.ogg");
    musics[1] = sfMusic_createFromFile("YlvisFox.ogg");
    musics[2] = sfMusic_createFromFile("Otonoke.ogg");
    for (int i = 0; i < MAX_MUSICS && musics[i] != NULL; i++)
        sfMusic_setLoop(musics[i], sfTrue);
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
    textures[2] = sfTexture_createFromFile("mb.png", NULL);
    textures[3] = sfTexture_createFromFile("fork_r.png", NULL);
    return textures;
}

static mytext_t **default_texts(void)
{
    mytext_t **texts = malloc(MAX_TEXTS * sizeof(mytext_t *));
    sfFont *font = sfFont_createFromFile("OverLight.otf");

    for (int i = 0; i < MAX_TEXTS; i++) {
        texts[i] = malloc(sizeof(mytext_t));
        texts[i]->text = sfText_create();
        texts[i]->age = 0;
        sfText_setFont(texts[i]->text, font);
        sfText_setString(texts[i]->text, "(+ %d)");
        sfText_setCharacterSize(texts[i]->text, 0);
    }
    return texts;
}

resources_t *default_resources(void)
{
    resources_t *resources = malloc(sizeof(resources_t));
    int fd = open("score", O_CREAT | O_RDONLY, 0666);

    resources->best_score = fs_get_number_from_first_line(fd);
    resources->score = 0;
    resources->evolution_score = 0;
    resources->texts = default_texts();
    resources->textures = default_textures();
    resources->sprites = default_sprites();
    resources->musics = default_musics();
    resources->current_music = 0;
    resources->evolution_stage = 1;
    close(fd);
    return resources;
}
