#include <stdio.h>

//#include "ft_putchar.c"
#include "ft_tolower.c"

int main(int argc, char const *argv[])
{
	// ft_tolower
	int ft_tolower(int c);
	    int	x;
	    int y;

	    x = 130;
	    y = 67;
	    if (x == ft_tolower(x))
	    	puts("ft_tolower\tOK");
	    else if(x != ft_tolower(x))
	    	printf ("ft_tolower\tFAIL with input %d\n", x);
	    if (y + 32 == ft_tolower(y))
			puts("ft_tolower\tOK");
		else
	    	printf ("ft_tolower\tFAIL with input %d\n", y);
	return (0);
}
