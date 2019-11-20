##
## EPITECH PROJECT, 2017
## task1
## File description:
## Makefile
##

CFLAGS	=	-Wall -Wextra -Werror -I includes

TFLAGS	=	-l criterion --coverage -l gcov

CC	=	gcc

RM	=	rm -f

PREFIX	=	sources/

PREFIXT	=	tests/

FILES	=	do_op.c				\
			ex1.c				\
			ex2.c				\

MAIN	=	sources/main.c		\

FILEST	=	example.c			\
			ex1.c				\
			ex2.c				\
			ex3.c				\
			ex4.c				\

SRC	=	$(addprefix $(PREFIX), $(FILES))

SRCT	=	$(addprefix $(PREFIXT), $(FILEST))

OBJT	=	$(SRC:.c=.o)

OBJ	=	$(SRC:.c=.o) $(MAIN:.c=.o)

NAME	=	example

NAMET	=	unit_tests

%.o:	%.c
	-$(CC) -o $@ -c $< $(CFLAGS)

all:	$(NAME)

$(NAME): 	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

tests_run:	fclean	$(OBJT)
	$(CC) $(SRC) $(SRCT) -o $(NAMET) $(CFLAGS) $(TFLAGS)
	./unit_tests

clean:
	$(RM) $(OBJ)
fclean:	clean
	find . -name "*~" -delete -o -name "*.gch" -delete
	find . -name "*.gcda" -delete -o -name "*.gcno" -delete
	$(RM) $(NAME)
	$(RM) $(NAMET)
re:	fclean all

.PHONY: all $(NAME) clean fclean re
