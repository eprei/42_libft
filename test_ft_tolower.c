#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c);

int main()
{
    printf("The return of tolower('`') is\t\t%d\n", tolower('`'));
    printf("The return of ft_tolower('`') is\t%d\n\n", ft_tolower('`'));
    printf("The return of tolower('a') is\t\t%d\n", tolower('a'));
    printf("The return of ft_tolower('a') is\t%d\n\n", ft_tolower('a'));
    printf("The return of tolower('~') is\t\t%d\n", tolower('~'));
    printf("The return of ft_tolower('~') is\t%d\n\n", ft_tolower('~'));
    printf("The return of tolower(0) is\t\t%d\n", tolower(0));
    printf("The return of ft_tolower(0) is\t\t%d\n\n", ft_tolower(0));
    printf("The return of tolower(2147483647) is\t%d\n", tolower(2147483647));
    printf("The return of ft_tolower(2147483647) is\t%d\n\n", ft_tolower(2147483647));
    printf("The return of tolower(-2147483648) is\t%d\n", tolower(-2147483648));
    printf("The return of ft_tolower(-2147483648) is%d\n\n", ft_tolower(-2147483648));
    printf("The return of tolower('{') is\t\t%d\n", tolower('{'));
    printf("The return of ft_tolower('{') is\t%d\n\n", ft_tolower('{'));
    printf("The return of tolower('k') is\t\t%d\n", tolower('k'));
    printf("The return of ft_tolower('k') is\t%d\n\n", ft_tolower('k'));
    printf("The return of tolower('z') is\t\t%d\n", tolower('z'));
    printf("The return of ft_tolower('z') is\t%d\n\n", ft_tolower('z'));
    printf("The return of tolower('A') is\t\t%d\n", tolower('A'));
    printf("The return of ft_tolower('A') is\t%d\n\n", ft_tolower('A'));
    printf("The return of tolower('Z') is\t\t%d\n", tolower('Z'));
    printf("The return of ft_tolower('Z') is\t%d\n\n", ft_tolower('Z'));
    return (0);
}