NAME = ft_display_file
SRC_PATH = 	./
SRC_NAME =	ft_display_file.c
SRC =  $(addprefix $(SRC_PATH), $(SRC_NAME))

INCLUDE_PATH = ./
INCLUDE_NAME = sources.h
INCLUDE = $(addprefix $(INCLUDE_PATH), $(INCLUDE_NAME))

OBJ = $(SRC_NAME:.c=.o)

FLAGS = -Wall -Wextra -Werror -c

all: $(NAME)

$(NAME):
	gcc $(SRC) $(INCLUDE) $(FLAGS)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
