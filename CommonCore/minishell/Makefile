CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes/ -g
AR = ar rc
NAME = minishell
SRCS = main.c \
		$(addprefix builtins/, cd_builtin.c echo_builtin.c env_builtin.c exit_builtin.c export_builtin.c pwd_builtin.c unset_builtin.c) \
		$(addprefix env/, ) \
		$(addprefix execute/, ) \
		$(addprefix parsing/, ) \
		$(addprefix utils/, )
OBJ_DIR = objects
OBJ = $(SRCS:.c=.o)
OBJ := $(addprefix $(OBJ_DIR)/, $(OBJ))
LIBFT_DIR = includes/libft
LIBFT = includes/libft/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFT_DIR)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBFT) -lreadline

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)
	@make clean -C ./$(LIBFT_DIR)

fclean: clean
	rm -rf $(NAME)
	@make fclean -C ./$(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re comp
