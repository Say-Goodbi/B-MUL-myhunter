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
int my_strcmp(char *s1, char *s2);
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
void draw_texts(sfRenderWindow *window, mytext_t **texts);
void destroy_instance(instance_t *game);
instance_t *default_game_instance(void);
void delimit_mysprite(mysprite_t *mysprite,
    sfIntRect *box, int offset, int frames);
void actualize_sprites(mysprite_t **my_sprites);
void run_actualize_instance(instance_t *game);
void idle_actualize_instance(instance_t *game);
void move_sprites(mysprite_t **my_sprites, spawner_t *spawner_c);
void append_sprite(resources_t *resources, mysprite_t *mysprite);
mytext_t **get_unused_text(resources_t *resources);
int shoot_target(sfMouseButtonEvent ev, instance_t **game, int i);
void destroy_mysprite(mysprite_t **mysprite);
void launch_clocks(instance_t *game);
void show_scored(int shoot_res, sfMouseButtonEvent event,
    instance_t **game);
void launch_run(instance_t **game);
void load_menu(resources_t *resources);
spawner_t *new_spawner_c(void);
void load_a_random_mob(instance_t **game, spawner_t **spawner, int i);
void spawner_clocks(instance_t **game);
void up_evolution_stage(instance_t **game);
char *my_strcpy(char *dest, char const *src);
void pause_game(instance_t *game);
void resume_game(instance_t *game);
void manage_key_pressed(sfKeyEvent ev, instance_t *game);
void destroy_all_sprites(resources_t *resources);
void quit_party(instance_t *game);
void save_score(instance_t *game);
void my_put_nbr(int nb, int fd);
int fs_get_number_from_first_line(int fd);
void emphasize_text(sfText *text);
void delete_gone_sprite(mysprite_t **my_sprites, int i, sfVector2f pos,
    spawner_t *spawner_c);
sfText *default_score_display(void);
void actualize_score_display(instance_t **game);
void reset_score(instance_t *game);
void destroy_spawner(spawner_t *spawner_c);
void move_duck(mysprite_t **my_sprites, int i, spawner_t *spawner_c);
void load_bouncyball(resources_t *resources, float x, float y);
void move_bouncyball(mysprite_t **my_sprites, int i, spawner_t *spawner_c);
void change_string_menu(sfText **text, int best_score);
void load_fork(resources_t *resources, float x, float y);
void move_fork(mysprite_t **my_sprites, int i, spawner_t *spawner_c);
int do_mobs_collide(sfMouseButtonEvent ev, mysprite_t **my_sprite);
void change_music(instance_t **game);
void fs_cat_x_bytes(const char *pathname, int x);
#endif
