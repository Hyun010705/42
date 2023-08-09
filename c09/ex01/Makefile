CC = gcc
CFRAGS = -Wall -Wextra -Werror
SRC_DIR = ./srcs/
SRC = srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c srcs/ft_putchar.c srcs/ft_putstr.c
INCLUDE = ./includes/
NAME = libft.a

all : $(NAME)

OBJ = $(SRC:.c=.o)

%.o : %.c
	$(CC) $(CFRAGS) -c $< -o $@ -I $(INCLUDE)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
