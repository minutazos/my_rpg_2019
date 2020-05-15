##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC		=	$(wildcard src/*.c) 			\
				$(wildcard src/time/*.c) 	\
				$(wildcard src/events/*.c) 	\
				$(wildcard src/objects/*.c) 	\
				$(wildcard src/environment/*.c)	\
				$(wildcard src/utils/*.c)	\
				$(wildcard src/sound/*.c) \
				$(wildcard src/menu/*.c) \
				$(wildcard src/player/*.c) \
				$(wildcard src/keyboard/*.c) \
				$(wildcard src/player/animations/*.c) \
				$(wildcard src/audio/*.c)		\
				$(wildcard src/scenes/*.c) \
				$(wildcard src/libc/*.c) \
				$(wildcard src/quests/*.c)	\
				$(wildcard src/objects/hud/*.c)	\
				$(wildcard src/enemies/*.c)	\
				$(wildcard src/enemies/animations/*.c)	\
				$(wildcard src/collisions/*.c)

OBJ     =	$(SRC:.c=.o)

NAME    =	my_rpg

CSFML	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

CFLAGS	=	-I include -lm -g

all:    $(NAME)

$(NAME):        $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CSFML) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all
