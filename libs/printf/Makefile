NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

INCLUDE = ft_printf.h 

SRCS = ft_printf.c\
		print_char_str.c\
		extra_fonctions.c\
		print_int.c\
		print_ptr.c\

OBJS = ${SRCS:.c=.o}


all: $(NAME)

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

.c.o: 
	${CC} ${CFLAGS} -I ${INCLUDE} -c $< -o $(<:.c=.o)

clean: 
		rm -rf ${OBJS}

fclean: clean
		rm -rf ${NAME}

re: fclean all 

.PHONY: all clean fclean re