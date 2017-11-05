TARG = libft.a
EXCLUDES = main_test.c
#escape doens't work
SRC := $(filter-out $(EXCLUDES), *.c)
DEP = *.h
FLAGS = -Wall -Wextra -Werror
ODIR = ./obj/

# Object compilation
compile:
	gcc $(FLAGS) -c $(SRC)
	mkdir $(ODIR)
	mv *.o $(ODIR)

clean:
	rm -r ./obj/

fclean: clean
	rm -f $(TARG)

re: fclean all
