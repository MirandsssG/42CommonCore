CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes/ -g
AR = ar rc
NAME = philosophers
SRCS = main.c \
		# $(addprefix builtins/, )
OBJ_DIR = objects
OBJ = $(SRCS:.c=.o)
OBJ := $(addprefix $(OBJ_DIR)/, $(OBJ))
LIBFT_DIR = includes/libft
LIBFT = includes/libft/libft.a
PRINTF_DIR = includes/libftprintf
PRINTF = includes/libftprintf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFT_DIR)
	@make -C $(PRINTF_DIR)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBFT) $(PRINTF)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)
	@make clean -C ./$(LIBFT_DIR)
	@make clean -C ./$(PRINTF_DIR)

fclean: clean
	rm -rf $(NAME)
	@make fclean -C ./$(LIBFT_DIR)
	@make fclean -C ./$(PRINTF_DIR)

re: fclean all

.PHONY: all clean fclean re comp