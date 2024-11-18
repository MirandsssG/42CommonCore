CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
NAME = libftprintf.a
MAIN = main.c
SRC = src/
OBJ = $(SRC:.c=.o)
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 
BONUS_OBJS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $(BONUS_OBJS)
	rm -f .bonus

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: .bonus

.bonus: $(BONUS_OBJS) $(OBJ)
	$(AR) $(NAME) $(BONUS_OBJS) $(OBJ)
	@touch .bonus

comp: all
	$(CC) $(CFLAGS) -lbsd $(MAIN) $(NAME) 
	@./a.out

.PHONY: all clean fclean re comp bonus
