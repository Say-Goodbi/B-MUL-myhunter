/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** Headedr with function prototypes
*/

#ifndef MY_HUNTER_H_
    #define MY_HUNTER_H_
    #include "resources.h"
sfSprite *new_sprite(sfTexture *texture);
void destroy_resources(resources_t *resources);
resources_t *default_resources(void);
void load_duck(resources_t *resources, float x, float y);
void analyse_events(instance_t *game);
void manage_mouse_click(sfMouseButtonEvent event, instance_t *game);
void close_window(sfRenderWindow *window);
sfTexture *new_texture(char *texturepath);
sfSprite *new_sprite(sfTexture *texture);
void move_rect(sfIntRect *rect, int offset, int max_value);
void draw_instance(instance_t *game);
void draw_sprites(sfRenderWindow *window, mysprite_t **mysprites);
void destroy_instance(instance_t *game);
instance_t *default_game_instance(void);
void delimit_mysprite(mysprite_t *mysprite,
    sfIntRect *box, int offset, int frames);
void actualize_sprites(mysprite_t **my_sprites);
void actualize_instance(instance_t *game);
void move_sprites(mysprite_t **my_sprites);
void append_sprite(resources_t *resources, mysprite_t *mysprite);
int shoot_target(sfMouseButtonEvent ev, mysprite_t **my_sprites, int i);
void destroy_mysprite(mysprite_t **mysprite);
void launch_clocks(instance_t *game);
#endif
