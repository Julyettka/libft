NAME = libft.a
SRC = *c *.h
FLAGS = -Wall -Wextra -Werror
ODIR = ./obj

$(NAME):
	gcc $(FLAGS) -c $(SRC)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
