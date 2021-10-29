#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
	printf("the return of isascii for -2147483648 is \t%d\n", isascii(-2147483648));
	printf("the return of ft_isascii for -2147483648 is\t%d\n\n", ft_isascii(-2147483648));
    printf("the return of isascii for 0 is \t\t\t%d\n", isascii(0));
	printf("the return of ft_isascii for 0 is\t\t%d\n\n", ft_isascii(0));
    printf("the return of isascii for 127 is \t\t%d\n", isascii(127));
	printf("the return of ft_isascii for 127 is\t\t%d\n\n", ft_isascii(127));
    printf("the return of isascii for 128 is \t\t%d\n", isascii(128));
	printf("the return of ft_isascii for 128 is\t\t%d\n\n", ft_isascii(128));
    printf("the return of isascii for 2147483647 is \t%d\n", isascii(2147483647));
	printf("the return of ft_isascii for 2147483647 is\t%d\n\n", ft_isascii(2147483647));
    return (0);
}
