CC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar rc
NAME = ft_display_file
SRC = srcs
DIR = includes
SRC_FILES = srcs/*.c
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