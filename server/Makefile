##
## Makefile for Server in /home/alexandre/Documents/tek1/mouliPushswap
##
## Made by alexandre Chamard-bois
## Login   <alexandre@epitech.net>
##
## Started on  Wed Oct 18 22:50:38 2017 alexandre Chamard-bois
## Last update Wed Oct 18 22:50:38 2017 alexandre Chamard-bois
##

CC		=	gcc

CFLAGS		=	-W -Wall -Wextra -Werror
CFLAGS		+=	-I./include

SRC		=	src/main.c		\
			src/file/config/open.c	\
			src/file/config/print.c	\
			src/init/init.c		\
			src/init/parse_args.c	\
			src/reseau/launch.c	\
			src/reseau/requests.c

SRC		+=	src/init/home.c		\
			src/init/data.c		\
			src/init/references.c	\
			src/init/size.c		\

SRC		+=	src/lib/trim.c		\

OBJ		=	$(SRC:.c=.o)

NAME		=	serverFT

all		:	$(NAME)

$(NAME)		:	$(OBJ)
			$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean		:
			rm -f $(OBJ)

fclean		:	clean
			rm -f $(NAME)

re		:	fclean all
