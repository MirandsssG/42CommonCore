CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes/
AR = ar rc
NAME = pushswap
SRCS = 
OBJ = $(SRCS:.c=.o)
LIBFTPRINTF = includes/libftprintf/libftprintf.a
LIBFT = includes/libft/libft.a


all: $(NAME)

$(NAME): $(OBJ) $(LIBFTPRINTF) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFTPRINTF) $(LIBFT) -o $(NAME)

$(LIBFTPRINTF):
	make -C includes/libftprintf/ -f makefile

$(LIBFT):
	make -C includes/libft/ -f makefile

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

comp: all
	$(CC) $(CFLAGS) $(MAIN) $(NAME)
	@./a.out

.PHONY: all clean fclean re comp
