CC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar rc
NAME = libft.h
SRC = srcs
DIR = includes
SRC_FILES = ft_isalpha.c
OBJ_FILES = $(SRC_FILES:.c=.o)
OBJS = $(addprefix $(SRC)/, $(OBJ_FILES))

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(SRC)/%.o: $(SRC)/%.c
	$(CC) $(FLAGS) -I $(DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all