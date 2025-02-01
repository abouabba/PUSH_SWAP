
CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

AR =  ar rc

SRC = 	ft_atoi.c ft_split.c main.c parse.c stack_utils.c utils.c swap.c push.c rotate.c \
		 reverse_rotate.c sorting_3.c sorting_4.c sorting_5.c push_to_b.c

OBJ = ${SRC:.c=.o}
HEADER = push_swap.h


all :${NAME}

${NAME} : ${OBJ}
	${CC} ${CFLAGS}  ${OBJ} -o ${NAME}

%.o:%.c  ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJ}

fclean :clean   
	rm -f ${NAME}

re : fclean all
