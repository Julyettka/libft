NAME = libft.a
SRC = *c *.h

$(NAME):
	gcc -g -c $(SRC)
	ar rc $(NAME) *.o
	ranlib $(NAME)

all: $(NAME)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

