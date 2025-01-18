
CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = push_swap.a

AR =  ar rc

SRC = 	ft_atoi.c ft_split.c parse.c push_swap.c utils.c

OBJ = ${SRC:.c=.o}
HEADER = push_swap.h


all :${NAME}

${NAME} :${OBJ}

%.o:%.c ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@
	${AR} ${NAME} $@

clean:
	rm -f ${OBJ}

fclean :clean   
	rm -f ${NAME}

re : fclean all