CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = so_long
LIB = so_long.a
SRC_DIRS = floodfill parsing
SRCS = main.c \
	$(addprefix floodfill/, floodfill.c copy_map.c find_player.c is_reachable.c path_valid.c) \
	$(addprefix parsing/, parsing1.c parsing2.c) \
	$(addprefix initialize/, initialize.c)
OBJ_DIR = objects
OBJ = $(SRCS:.c=.o)
OBJ := $(addprefix $(OBJ_DIR)/, $(OBJ))
LIBFT_DIR = includes/libft
LIBFTPRINTF_DIR = includes/libftprintf
MLIBX_DIR = includes/minilibx-linux
LIBFT = $(LIBFT_DIR)/libft.a
LIBFTPRINTF = $(LIBFTPRINTF_DIR)/libftprintf.a
MLIBX = $(MLIBX_DIR)/libmlx_linux.a

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFT_DIR)
	@make -C $(LIBFTPRINTF_DIR)
	@make -C $(MLIBX_DIR)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBFT) $(LIBFTPRINTF) $(MLIBX) -Lmlx -lXext -lX11

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ_DIR)
	@make clean -C ./$(LIBFT_DIR)
	@make clean -C ./$(LIBFTPRINTF_DIR)
	@make clean -C ./$(MLIBX_DIR)

fclean: clean
	rm -rf $(NAME)
	@make fclean -C ./$(LIBFT_DIR)
	@make fclean -C ./$(LIBFTPRINTF_DIR)
	@make fclean -C ./$(MLIBX_DIR)

re: fclean all

.PHONY: all clean fclean re
