#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int main()
{
    printf("The return of tupper('`') is\t\t%d\n", toupper('`'));
    printf("The return of ft_tupper('`') is\t\t%d\n\n", ft_toupper('`'));
    printf("The return of tupper('a') is\t\t%d\n", toupper('a'));
    printf("The return of ft_tupper('a') is\t\t%d\n\n", ft_toupper('a'));
    printf("The return of tupper('~') is\t\t%d\n", toupper('~'));
    printf("The return of ft_tupper('~') is\t\t%d\n\n", ft_toupper('~'));
    printf("The return of tupper(0) is\t\t%d\n", toupper(0));
    printf("The return of ft_tupper(0) is\t\t%d\n\n", ft_toupper(0));
    printf("The return of tupper(2147483647) is\t%d\n", toupper(2147483647));
    printf("The return of ft_tupper(2147483647) is\t%d\n\n", ft_toupper(2147483647));
    printf("The return of tupper(-2147483648) is\t%d\n", toupper(-2147483648));
    printf("The return of ft_tupper(-2147483648) is\t%d\n\n", ft_toupper(-2147483648));
    printf("The return of tupper(-2147483648) is\t%d\n", toupper(-2147483648));
    printf("The return of ft_tupper(-2147483648) is\t%d\n\n", ft_toupper(-2147483648));
    printf("The return of tupper('{') is\t\t%d\n", toupper('{'));
    printf("The return of ft_tupper('{') is\t\t%d\n\n", ft_toupper('{'));
    printf("The return of tupper('k') is\t\t%d\n", toupper('k'));
    printf("The return of ft_tupper('k') is\t\t%d\n\n", ft_toupper('k'));
    printf("The return of tupper('z') is\t\t%d\n", toupper('z'));
    printf("The return of ft_tupper('z') is\t\t%d\n\n", ft_toupper('z'));
    return (0);
}