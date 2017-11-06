TARG = libft.a
SRC = *.c *.h
FLAGS = -Wall -Wextra -Werror
ODIR = ./obj/
TEST = main_test.c

# Object compilation
$(TARG):
	gcc $(FLAGS) -c $(SRC)
	mkdir obj
	mv *.o ./obj/
	ar rc $(TARG) ./obj/*.o
	ranlib $(TARG)

clean:
	rm -r $(ODIR)

fclean: clean
	rm -f $(TARG)

re: fclean all

t:
	gcc -o test ./tests/$(TEST)
	./test

