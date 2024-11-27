##
## EPITECH PROJECT, 2024
## Upsetting me rn
## File description:
## Makefile
##

NAME	=	my_hunter

SRC	=	close_window.c \
	destroy_mysprite.c \
	launch_run.c \
	manage_key_pressed.c \
	my_strcpy.c \
	pause_game.c \
	show_scored.c \
	actualize_instance.c \
	destroy_resources.c \
	load_a_mob.c \
	manage_mouse_click.c \
	new_spawner_c.c \
	quit_party.c \
	spawner_clocks.c \
	actualize_sprites.c \
	default_game_instance.c \
	draw_instance.c \
	load_duck.c \
	move_rect.c \
	new_sprite.c \
	analyse_events.c \
	default_resources.c \
	draw_sprites.c \
	move_sprites.c \
	new_texture.c \
	resume_game.c \
	string_strcmp.c \
	append_sprite.c \
	delimit_mysprite.c \
	draw_texts.c \
	load_menu.c \
	my_get_nbr.c \
	new_window.c \
	save_score.c \
	get_unused_text.c \
	destroy_all_sprites.c \
	fs_get_number_from_first_line.c \
	main.c \
	up_evolution_stage.c \
	destroy_instance.c \
	launch_clocks.c \
	my_put_nbr.c \
	shoot_target.c \
	emphasize_text.c \
	my_strdup.c \
	default_score_display.c \
	actualize_score_display.c \
	reset_score.c \
	destroy_spawner.c \
	move_duck.c \
	delete_gone_sprites.c \
	load_bouncyball.c \
	move_bouncyball.c \
	load_fork.c \
	move_fork.c \
	do_mobs_collide.c \
	change_music.c

$(NAME) :
	gcc $(SRC) -lm -lcsfml-graphics -lcsfml-audio -lcsfml-system -o $(NAME)

all : $(NAME)

clean :
	rm -rf *.o
	rm -rf *~

fclean : clean
	rm -rf $(NAME)

re : fclean all
