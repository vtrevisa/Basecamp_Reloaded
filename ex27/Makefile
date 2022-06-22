NAME	= ft_display_file

FLAG	= -Wall -Werror -Wextra

SRC	= ft_putchar.c ft_putstr.c main.c

OBJ	= ft_putchar.o ft_putstr.o main.o

all:	${NAME}

${NAME}:
	gcc ${FLAG} -o ${NAME} ${SRC}

clean:
	rm -f ${OBJ}

fclean:	clean
	rm -f ${NAME}
