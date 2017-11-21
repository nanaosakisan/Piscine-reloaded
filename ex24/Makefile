NAME = libft.a

SRC_PATH = srcs/
SRC_NAME =	ft_putchar.c \
			ft_putstr.c \
			ft_strcmp.c \
			ft_strlen.c \
			ft_swap.c
SRC =  $(addprefix $(SRC_PATH), $(SRC_NAME))

INCLUDE_PATH = includes/
INCLUDE_NAME =
INCLUDE = $(addprefix $(INCLUDE_PATH), $(INCLUDE_NAME))

OBJ = $(SRC_NAME:.c=.o)

FLAGS = -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME):
	gcc $(SRC) $(INCLUDE) $(FLAGS)
	ar rc libft.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
