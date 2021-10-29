#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
	printf("the return of isalnum for 64 is \t\t%d\n", isalnum(64));
	printf("the return of ft_isalnum for 64 is\t\t%d\n\n", ft_isalnum(64));
	printf("the return of isalnum for 65 is \t\t%d\n", isalnum(65));
	printf("the return of ft_isalnum for 65 is\t\t%d\n\n", ft_isalnum(65));
    printf("the return of isalnum for '0' is \t\t%d\n", isalnum('0'));
	printf("the return of ft_isalnum for '0' is\t\t%d\n\n", ft_isalnum('0'));
    printf("the return of isalnum for '6' is \t\t%d\n", isalnum('6'));
	printf("the return of ft_isalnum for '6' is\t\t%d\n\n", ft_isalnum('6'));
	printf("the return of isalnum for 90 is \t\t%d\n", isalnum(90));
	printf("the return of ft_isalnum for 90 is\t\t%d\n\n", ft_isalnum(90));
	printf("the return of isalnum for 91 is \t\t%d\n", isalnum(91));
	printf("the return of ft_isalnum for 91 is\t\t%d\n\n", ft_isalnum(91));
	printf("the return of isalnum for 96 is \t\t%d\n", isalnum(96));
	printf("the return of ft_isalnum for 96 is\t\t%d\n\n", ft_isalnum(96));
	printf("the return of isalnum for 97 is \t\t%d\n", isalnum(97));
	printf("the return of ft_isalnum for 97 is\t\t%d\n\n", ft_isalnum(97));
	printf("the return of isalnum for 122 is \t\t%d\n", isalnum(122));
	printf("the return of ft_isalnum for 122 is\t\t%d\n\n", ft_isalnum(122));
	printf("the return of isalnum for 123 is \t\t%d\n", isalnum(123));
	printf("the return of ft_isalnum for 123 is\t\t%d\n\n", ft_isalnum(123));
	printf("the return of isalnum for 2147483647 is \t%d\n", isalnum(2147483647));
	printf("the return of ft_isalnum for 2147483647 is\t%d\n\n", ft_isalnum(2147483647));
	printf("the return of isalnum for -2147483648 is \t%d\n", isalnum(-2147483648));
	printf("the return of ft_isalnum for -2147483648 is\t%d\n\n", ft_isalnum(-2147483648));
    printf("the return of isalnum for 0 is \t\t\t%d\n", isalnum(0));
	printf("the return of ft_isalnum for 0 is\t\t%d\n\n", ft_isalnum(0));

	return (0);
}
