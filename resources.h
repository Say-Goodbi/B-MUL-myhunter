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
    #define MAX_TEXTS 40
    #define NUM_TEXTURES 10

typedef struct gameinstance instance_t;

typedef enum mobtype_s {
    STARTBUTTON = 0,
    DUCK = 1,
    BOUNCYBALL = 2,
    FORK = 3
} mobtype_t;

typedef enum gamestate_s {
    MENU = 0,
    RUNNING = 1,
    PAUSED = 2
} gamestate_t;

typedef struct mysprite {
    sfSprite *sprite;
    sfIntRect box;
    mobtype_t type;
    char alive;
    int offset;
    int frames;
    float velocity_x;
    float velocity_y;
    float radius;
    float rot;
} mysprite_t;

typedef struct mytext {
    sfText *text;
    int age;
} mytext_t;

typedef struct resources {
    mytext_t **texts;
    sfTexture **textures;
    mysprite_t **sprites;
    mysprite_t **menusprites;
    sfMusic **musics;
    int current_music;
    int score;
    int evolution_score;
    int evolution_stage;
    int best_score;
} resources_t;

typedef struct spawner {
    unsigned int lives;
    sfClock **spawnclocks;
    char *are_on;
    sfClock *offtime;
} spawner_t;

typedef struct gameinstance {
    sfRenderWindow *window;
    sfEvent event;
    gamestate_t status;
    spawner_t *spawner_c;
    sfClock *actuclock;
    sfClock *moveclock;
    sfClock *gametime;
    sfVector2u win_size;
    resources_t *resources;
    sfText *score_display;
} instance_t;

#endif
