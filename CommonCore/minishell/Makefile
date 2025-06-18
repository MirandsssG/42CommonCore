CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes/ -g
AR = ar rc
NAME = minishell
OPERATION_DIR = operations/push.c \
					operations/rev_rotate.c \
					operations/rotate.c \
					operations/swap.c \
					push_swap.c
HELPERS_DIR = helpers/errors.c \
					helpers/helpers.c \
					helpers/initialize_nodes_a.c \
					helpers/initialize_nodes_b.c \
					helpers/initialize_stack_a.c \
					helpers/sort_stacks.c \
					helpers/sort_three.c \
					helpers/stack_sorted.c \
					helpers/split.c
SRCS = $(OPERATION_DIR) $(HELPERS_DIR)
OBJ = $(SRCS:.c=.o)
LIBFT = includes/libft/libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C includes/libft/ -f makefile

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re comp
