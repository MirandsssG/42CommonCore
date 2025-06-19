CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes/ -g
AR = ar rc
NAME = minishell
OPERATION_DIR = minishell.c
HELPERS_DIR = 
SRCS = $(OPERATION_DIR) $(HELPERS_DIR)
OBJ = $(SRCS:.c=.o)
LIBFT = includes/libft/libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C includes/libft/ -f Makefile

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re comp
