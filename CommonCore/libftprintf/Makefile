CC = cc
CFLAGS = -Wall -Wextra -Werror -I./libft
AR = ar rc
NAME = libftprintf.a
MAIN = main.c
# LIBFT = ./libft/libft.a
SRC = ft_printf.c ft_print_hex.c ft_print_ptr.c ft_print_unsigned.c ft_printf_utils.c ft_bzero.c ft_calloc.c ft_itoa.c ft_memset.c ft_putchar_fd.c
OBJ = $(SRC:.c=.o)

all: $(NAME)
# $(LIBFT)
$(NAME): $(OBJ) 
	$(AR) $(NAME) $(OBJ)

# $(LIBFT):
# 	make -C ./libft

clean:
	rm -f $(OBJ)
	make -C ./libft clean

fclean: clean
	rm -f $(NAME)
	make -C ./libft fclean

re: fclean all

comp: all
	$(CC) $(CFLAGS) $(MAIN) $(NAME) $(LIBFT)
	@./a.out

.PHONY: all clean fclean re comp
