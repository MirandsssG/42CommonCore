CC = cc
CFLAGS = -Wall -Wextra -Werror -I./libft
AR = ar rc
NAME = libftprintf.a
MAIN = main.c
SRC = ft_printf.c ft_print_hex.c ft_print_ptr.c ft_print_unsigned.c ft_printf_utils.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)


fclean: clean
	rm -f $(NAME)

re: fclean all

comp: all
	$(CC) $(CFLAGS) -lbsd $(MAIN) $(NAME) 
	@./a.out

.PHONY: all clean fclean re comp
