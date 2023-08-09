CC = gcc
CFRAGS = -Wall -Wextra -Werror
SRC = fuc.c other.c main.c
NAME = do-op
OBJ = $(SRC:.c=.o)

%.o : %.c
	$(CC) $(CFRAGS) -c $< -o $@
	
all : 
	$(CC) $(CFRAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all
