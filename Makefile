##
## EPITECH PROJECT, 2024
## Upsetting me rn
## File description:
## Makefile
##

NAME	=	my_hunter

SRC	=	main.c

$(NAME) :
	gcc *.c -lm -lcsfml-graphics -lcsfml-audio -lcsfml-system -o $(NAME)

all : $(NAME)

clean :
	rm -rf *.o
	rm -rf *~

fclean : clean
	rm -rf $(NAME)

re : fclean all
