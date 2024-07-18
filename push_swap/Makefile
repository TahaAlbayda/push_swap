SRCS =  $(wildcard src/*.c utils/*.c)

OBJS				= ${SRCS:.c=.o}

NAME				= push_swap

LIBFTNAME 			= ./ft_printf/libftprintf.a

CC					= cc

RM					= rm -f

LIBFTDIR			= ./ft_printf

CFLAGS				= -Wall -Wextra -Werror -Iincludes -g

all:				${NAME}

%.o: %.c
					${CC} ${CFLAGS} -c $< -o $@


$(NAME):$(OBJS)
		make -C $(LIBFTDIR)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFTNAME)


clean:
					${RM} ${OBJS}
					@cd $(LIBFTDIR) && make clean

fclean:				clean
					${RM} ${NAME}
					@cd $(LIBFTDIR) && make fclean

re:					fclean all

.PHONY:				all bonus clean fclean re