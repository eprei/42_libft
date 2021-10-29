#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
    printf("the return of isdigit for -2147483648 is  \t%d\n", isdigit(-2147483648));
	printf("the return of ft_isdigit for -2147483648 is\t%d\n\n", ft_isdigit(-2147483648));
    printf("the return of isdigit for 0 is  \t\t%d\n", isdigit(0));
	printf("the return of ft_isdigit for 0 is\t\t%d\n\n", ft_isdigit(0));
    printf("the return of isdigit for 47 is  \t\t%d\n", isdigit(47));
	printf("the return of ft_isdigit for 47 is\t\t%d\n\n", ft_isdigit(47)); 
    printf("the return of isdigit for 48 is  \t\t%d\n", isdigit(48));
	printf("the return of ft_isdigit for 48 is\t\t%d\n\n", ft_isdigit(48));
	printf("the return of isdigit for '0' is  \t\t%d\n", isdigit('0'));
	printf("the return of ft_isdigit for '0' is\t\t%d\n\n", ft_isdigit('0'));
    printf("the return of isdigit for '1' is  \t\t%d\n", isdigit('1'));
	printf("the return of ft_isdigit for '1' is\t\t%d\n\n", ft_isdigit('1'));
    printf("the return of isdigit for '2' is  \t\t%d\n", isdigit('2'));
	printf("the return of ft_isdigit for '2' is\t\t%d\n\n", ft_isdigit('2'));
    printf("the return of isdigit for 57 is  \t\t%d\n", isdigit(57));
	printf("the return of ft_isdigit for 57 is\t\t%d\n\n", ft_isdigit(57));
    printf("the return of isdigit for 58 is  \t\t%d\n", isdigit(58));
	printf("the return of ft_isdigit for 58 is\t\t%d\n\n", ft_isdigit(58));
    printf("the return of isdigit for 2147483647 is  \t%d\n", isdigit(2147483647));
	printf("the return of ft_isdigit for 2147483647 is\t%d\n\n", ft_isdigit(2147483647));
    return (0);
}