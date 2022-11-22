##
## EPITECH PROJECT, 2022
## B-CPE-110-BDX-1-1-BSQ-maxence.raynal
## File description:
## Makefile
##

SRC	=	my_strlen.c	\
		my_perror.c	\
		my_getnbr.c	\
		my_putchar.c	\
		my_putstr.c	\

NAME	=	libmy.a

OBJ	=	$(SRC:.c=.o)

HEADER	=	my.h

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp $(HEADER) ../include/

clean:
	rm -f $(OBJ) *~ *.gcno *.gcda *.log *#

fclean:	clean
	rm -f $(NAME)
	rm -f ../$(NAME)
	rm -f ../include/$(HEADER)

.PHONY:	all clean fclean
