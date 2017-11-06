#include <stdio.h>

//#include "ft_putchar.c"
#include "ft_tolower.c"
#include "ft_strcmp.c"

int main(int argc, char *argv[])
{

	int ar;
	char **argum;

	ar = argc;
	argum = argv;
	// ft_tolower
	int ft_tolower(int c);
    int	x;
    int y;

    x = 130;
    y = 67;
    if (x == ft_tolower(x) && y + 32 == ft_tolower(y))
    	puts("User: ft_tolower\tOK\tOK");
	else
    	printf ("User: ft_tolower\tFAIL with input x = %d\n, y = %d\n", x, y);

	// ft_strcmp
	const char *str1;
	const char *str2;
	str1 = "abcdef";
	str2 = "abcde\200";
	printf("User: ft_strcmp\t %d\n", ft_strcmp(str1, str2));
	printf("Original: strcmp\t %d\n", strcmp(str1, str2));


	return (0);
}
