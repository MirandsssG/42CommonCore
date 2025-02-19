CC = cc
CFLAGS = -Wall -Wextra -Werror -I
AR = ar rc
NAME = pushswap.a
MAIN = main.c
LIBFT = ./includes/libft/libft.a
FT_PRINTF = ./includes/libftprintf/libftprintf.a
OPERATION_DIR = operations/push.c \
					operations/rev_rotate.c \
					operations/rotate.c \
					operations/swap.c
HELPERS_DIR = helpers/errors.c \
					helpers/helpers.c \
					helpers/initialize_nodes_a.c \
					helpers/initialize_nodes_b.c \
					helpers/initialize_stack_a.c \
					helpers/sort_stacks.c \
					helpers/sort_three.c \
					helpers/stack_sorted.c
SRCS = $(OPERATION_DIR) $(HELPERS_DIR)
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT) $(FT_PRINTF)
	$(AR) $(NAME) $(OBJ) $(LIBFT) $(FT_PRINTF)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

comp: all
	$(CC) $(CFLAGS) $(MAIN) $(NAME)
	@./a.out

.PHONY: all clean fclean re comp

