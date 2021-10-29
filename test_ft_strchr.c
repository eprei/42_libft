#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
    char *str;

    str = "0123456789ABCDEFGHIJKLMNOPQRSTWXYZabcdefghijklmnopqrstuvwxyz~";
    printf("Test to string: 0123456789ABCDEFGHIJKLMNOPQRSTWXYZabcdefghijklmnopqrstuvwxyz~\n\n");
    printf("return of strchr for string, 0 is \t\t%p\n", strchr(str, '\0'));
    printf("return of ft_strchr for string, 0 is \t\t%p\n", ft_strchr(str, '\0'));
    printf("return of strchr for string, '0' is \t\t%p\n", strchr(str, '0'));
    printf("return of ft_strchr for string, '0' is \t\t%p\n", ft_strchr(str, '0'));
    printf("return of strchr for string, '1' is \t\t%p\n", strchr(str, '1'));
    printf("return of ft_strchr for string, '1' is \t\t%p\n", ft_strchr(str, '1'));
    printf("return of strchr for string, '2' is \t\t%p\n", strchr(str, '2'));
    printf("return of ft_strchr for string, '2' is \t\t%p\n", ft_strchr(str, '2'));
    printf("return of strchr for string, '3' is \t\t%p\n", strchr(str, '3'));
    printf("return of ft_strchr for string, '3' is \t\t%p\n", ft_strchr(str, '3'));
    printf("return of strchr for string, 'w' is \t\t%p\n", strchr(str, 'w'));
    printf("return of ft_strchr for string, 'w' is \t\t%p\n", ft_strchr(str, 'w'));
    printf("return of strchr for string, 126 is \t\t%p\n", strchr(str, 126));
    printf("return of ft_strchr for string, 126 is \t\t%p\n", ft_strchr(str, 126));
    printf("return of strchr for string, 127 is \t\t%p\n", strchr(str, 127));
    printf("return of ft_strchr for string, 127 is \t\t%p\n", ft_strchr(str, 127));
    printf("return of strchr for string, 128 is \t\t%p\n", strchr(str, 128));
    printf("return of ft_strchr for string, 128 is \t\t%p\n", ft_strchr(str, 128));
    printf("return of strchr for string, -1 is \t\t%p\n", strchr(str, -1));
    printf("return of ft_strchr for string, -1 is \t\t%p\n", ft_strchr(str, -1));
    printf("return of strchr for string, 2147483647 is \t%p\n", strchr(str, 2147483647));
    printf("return of ft_strchr for string, 2147483647 is \t%p\n", ft_strchr(str, 2147483647));
    printf("return of strchr for string, -2147483647 is \t%p\n", strchr(str, -2147483647));
    printf("return of ft_strchr for string, -2147483647 is \t%p\n", ft_strchr(str, -2147483647));
    printf("return of strchr for string, -2147483648 is \t%p\n", strchr(str, -2147483648));
    printf("return of ft_strchr for string, -2147483648 is \t%p\n", ft_strchr(str, -2147483648));
    return (0);
}