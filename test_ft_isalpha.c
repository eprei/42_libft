#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
	printf("the return of isalpha for 64 is \t\t%d\n", isalpha(64));
	printf("the return of ft_isalpha for 64 is\t\t%d\n\n", ft_isalpha(64));
	printf("the return of isalpha for 65 is \t\t%d\n", isalpha(65));
	printf("the return of ft_isalpha for 65 is\t\t%d\n\n", ft_isalpha(65));
	printf("the return of isalpha for 90 is \t\t%d\n", isalpha(90));
	printf("the return of ft_isalpha for 90 is\t\t%d\n\n", ft_isalpha(90));
	printf("the return of isalpha for 91 is \t\t%d\n", isalpha(91));
	printf("the return of ft_isalpha for 91 is\t\t%d\n\n", ft_isalpha(91));
	printf("the return of isalpha for 96 is \t\t%d\n", isalpha(96));
	printf("the return of ft_isalpha for 96 is\t\t%d\n\n", ft_isalpha(96));
	printf("the return of isalpha for 97 is \t\t%d\n", isalpha(97));
	printf("the return of ft_isalpha for 97 is\t\t%d\n\n", ft_isalpha(97));
	printf("the return of isalpha for 122 is \t\t%d\n", isalpha(122));
	printf("the return of ft_isalpha for 122 is\t\t%d\n\n", ft_isalpha(122));
	printf("the return of isalpha for 123 is \t\t%d\n", isalpha(123));
	printf("the return of ft_isalpha for 123 is\t\t%d\n\n", ft_isalpha(123));
	printf("the return of isalpha for -123 is \t\t%d\n", isalpha(-123));
	printf("the return of ft_isalpha for -123 is\t\t%d\n\n", ft_isalpha(-123));
	printf("the return of isalpha for 0 is  \t\t%d\n", isalpha(0));
	printf("the return of ft_isalpha for 0 is\t\t%d\n\n", ft_isalpha(0));
	printf("the return of isalpha for 2147483647 is  \t%d\n", isalpha(2147483647));
	printf("the return of ft_isalpha for 2147483647 is\t%d\n\n", ft_isalpha(2147483647));
	printf("the return of isalpha for -2147483648 is  \t%d\n", isalpha(-2147483648));
	printf("the return of ft_isalpha for -2147483648 is\t%d\n", ft_isalpha(-2147483648));

	return (0);
}
