#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
	printf("the return of isprint for -2147483648 is  \t%d\n", isprint(-2147483648));
	printf("the return of ft_isprint for -2147483648 is\t%d\n\n", ft_isprint(-2147483648));
	printf("the return of isprint for 0 is  \t\t%d\n", isprint(0));
	printf("the return of ft_isprint for 0 is\t\t%d\n\n", ft_isprint(0));
	printf("the return of isprint for 31 is  \t\t%d\n", isprint(31));
	printf("the return of ft_isprint for 31 is\t\t%d\n\n", ft_isprint(31));
	printf("the return of isprint for ' ' is  \t\t%d\n", isprint(' '));
	printf("the return of ft_isprint for ' ' is\t\t%d\n\n", ft_isprint(' '));
	printf("the return of isprint for 'A' is  \t\t%d\n", isprint('A'));
	printf("the return of ft_isprint for 'A' is\t\t%d\n\n", ft_isprint('A'));
	printf("the return of isprint for '~' is  \t\t%d\n", isprint('~'));
	printf("the return of ft_isprint for '~' is\t\t%d\n\n", ft_isprint('~'));
	printf("the return of isprint for 127 is  \t\t%d\n", isprint(127));
	printf("the return of ft_isprint for 127 is\t\t%d\n\n", ft_isprint(127));
	printf("the return of isprint for 2147483647 is  \t%d\n", isprint(2147483647));
	printf("the return of ft_isprint for 2147483647 is\t%d\n\n", ft_isprint(2147483647));
    return (0);
}
