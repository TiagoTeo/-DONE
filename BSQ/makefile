SRCS	= srcs/create_matrix.c srcs/BSQ.c srcs/find_bsq.c srcs/ft_maplength.c srcs/map_check.c srcs/change_coord.c srcs/treat_map.c srcs/print_map.c srcs/ft_input.c srcs/find_size.c
OBJS	= ${SRCS:.c=.o}
INCS	= srcs/bsq.h
NAME	= bsq
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
FLAGSEXTRA	= -fsanitize=address -g
FILE	= map_stdin

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}: ${OBJS}
	${RM} ${FILE}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

sanitize: ${OBJS}
	${RM} ${FILE}
	${CC} ${CFLAGS} ${FLAGSEXTRA} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	${RM} ${FILE}

re: fclean all
