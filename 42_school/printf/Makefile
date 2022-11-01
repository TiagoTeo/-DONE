SRCS	= ft_printf.c printfunctions.c ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c
OBJS	= ${SRCS:.c=.o}
NAME	= libftprintf.a
LIBPF	= ar rc
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${LIBPF} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean re