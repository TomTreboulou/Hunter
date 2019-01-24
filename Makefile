##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## jeux
##

NAME =	my_hunter

SRC =	decvec_img_spr_sound_tex.c \
		move_destroy_rectangle_decspr3.c \
		ak_gun_manageweapon_game_gameloop.c \
		bon1_2_weapon_decspr4_curs.c \
		exit_draw_move_dash_clean.c \
		init_struct_win_scr_loose_scr_launch.c \
		kill1_2_clean_draw_regle_init.c \
		main.c \

OBJ =	$(SRC:.c=.o)

CC =	gcc

CFLAGS =	-lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio -g3

RM =	rm -f

RULE =	all

all:	$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(OBJ) -o $(NAME) $(CFLAGS) 

clean:	
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re: fclean all