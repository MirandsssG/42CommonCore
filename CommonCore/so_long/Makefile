CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
NAME = so_long
LIB = so_long.a
SRCS = 
OBJ = $(SRCS:.c=.o)
LIBFTPRINTF = includes/libftprintf/libftprintf.a
LIBFT = includes/libft/libft.a


all: $(LIB)

$(LIB) > $(OBJ)
	$(AR) $(LIB) $(OBJ)

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
