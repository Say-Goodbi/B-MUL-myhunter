/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Resource paths for the game
*/

#ifndef MY_HUNTER_RESOURCES_H
    #define MY_HUNTER_RESOURCES_H
    #define MAX_SPRITES 100
    #define MAX_MUSICS 6
    #define MAX_TEXTS 4
    #define NUM_TEXTURES 1
    #define TEXTUREPATHS (char *[]){"spritesheet.png"}
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>

typedef struct mysprite {
    sfSprite *sprite;
    sfIntRect box;
    char type;
    int offset;
    int frames;
    float velocity_x;
    float velocity_y;
} mysprite_t;

typedef struct resources {
    sfText **texts;
    sfTexture **textures;
    mysprite_t **sprites;
    sfMusic **musics;
} resources_t;

typedef struct gameinstance {
    sfRenderWindow *window;
    sfEvent event;
    sfClock *actuclock;
    sfClock *moveclock;
    sfVector2u win_size;
    resources_t *resources;
} instance_t;

#endif
