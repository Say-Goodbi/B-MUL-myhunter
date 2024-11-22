/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Resource paths for the game
*/

#ifndef MY_HUNTER_RESOURCES_H
    #define MY_HUNTER_RESOURCES_H
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #define DFLT_SPAWNSCORE 2
    #define MAX_SPRITES 100
    #define MAX_MUSICS 6
    #define MAX_TEXTS 4
    #define NUM_TEXTURES 2
    #define TEXTUREPATHS (char *[]){"sprite.png", "textures/PA-Plates.png"}

typedef struct gameinstance instance_t;

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
    int best_score;
    int score;
    int evolution_score;
    int evolution_stage;
} resources_t;

typedef struct spawner {
    unsigned int lives;
    sfClock **spawnclocks;
    char *are_on;
} spawner_t;

typedef struct gameinstance {
    sfRenderWindow *window;
    sfEvent event;
    char status;
    spawner_t *spawner_c;
    sfClock *actuclock;
    sfClock *moveclock;
    sfClock *gametime;
    sfVector2u win_size;
    resources_t *resources;
} instance_t;

/*
Status :
    0 -> menu
    1 -> playing
    2 -> paused
*/

#endif
