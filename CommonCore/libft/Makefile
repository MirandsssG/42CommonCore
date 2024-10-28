CC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar rc
NAME = libft.h
SRC = srcs
DIR = includes
SRC_FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c
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