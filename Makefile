##
## EPITECH PROJECT, 2022
## B-CPE-110-BDX-1-1-BSQ-maxence.raynal
## File description:
## Makefile
##

SRC	=	src/bsq_file.c	\
		src/bsq_gen.c	\
		src/error_handling.c	\
		src/file_loading.c	\
		src/dd_array_processing.c	\
		src/bsq_algo.c	\
		src/display_bsq.c	\

LIBNAME	=	libmy.a

NAME	=	bsq

OBJ	=	$(SRC:.c=.o)

TEST_OUT	= 	unit_tests

TEST_ARGS	= 	--coverage -lcriterion

MAIN	=	src/bsq.c

all:	$(NAME)

$(NAME):
	make -C lib
	gcc -I./include $(MAIN) $(SRC) -L./ -lmy -o $(NAME) --coverage

clean:
	make -C lib clean
	rm -f $(OBJ) *~ *.gcno *.gcda *.log *# vgcore.*

fclean:	clean
	make -C lib fclean
	rm -f $(NAME) $(TEST_OUT)

re:	fclean all

unit_tests:	re
	gcc -I./include -g $(SRC) $(TEST_ARGS) tests/*.c -L./ -lmy -o $(TEST_OUT)

run_tests:	unit_tests
	./$(TEST_OUT)

.PHONY:	all $(NAME) clean fclean re
