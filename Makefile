##
## EPITECH PROJECT, 2022
## B-CPE-110-BDX-1-1-BSQ-maxence.raynal
## File description:
## Makefile
##

SRC	=	src/bsq.c	\
		src/bsq_file.c	\
		src/bsq_gen.c	\
		src/error_handling.c	\
		src/file_loading.c	\
		src/dd_array_processing.c	\
		src/bsq_algo.c	\

LIBNAME	=	libmy.a

NAME	=	bsq

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):
	make -C lib
	gcc -I./include $(SRC) -L./ -lmy -o $(NAME) -g

clean:
	make -C lib clean
	rm -f $(OBJ) *~ *.gcno *.gcda *.log *# vgcore.*

fclean:	clean
	make -C lib fclean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all $(NAME) clean fclean re
