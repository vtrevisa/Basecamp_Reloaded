NAME	= libft.a
FLAG	= -Wall -Wextra -Werror
INCL	= -c -I ./include/
SRCS	= ./srcs/
OBJS	= ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
 
all:	${NAME}

${NAME}:
	gcc ${FLAG} ${INCL} ${SRCS}ft_putchar.c ${SRCS}ft_putstr.c ${SRCS}ft_strcmp.c ${SRCS}ft_strlen.c ${SRCS}ft_swap.c
	ar rc ${NAME} ${OBJS}

clean:		
	rm -f ${OBJS} 

fclean:	clean
	rm -f ${NAME}

re:	fclean all
