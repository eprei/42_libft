#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	char *str;

	str = " !\"#$&*()*+,-./0123456789ABCDEFGHIJKLMNOPQRSTWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
    printf("Test to string:  !\"#$&*()*+,-./0123456789ABCDEFGHIJKLMNOPQRSTWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\n\n");
    printf("return of strrchr for string, 0 is \t\t%p\n", strrchr(str, '\0'));
    printf("return of ft_strrchr for string, 0 is \t\t%p\n", ft_strrchr(str, '\0'));
    printf("return of strrchr for string, '1' is \t\t%p\n", strrchr(str, '1'));
    printf("return of ft_strrchr for string, '1' is \t%p\n", ft_strrchr(str, '1'));
    printf("return of strrchr for string, '2' is \t\t%p\n", strrchr(str, '2'));
    printf("return of ft_strrchr for string, '2' is \t%p\n", ft_strrchr(str, '2'));
    printf("return of strrchr for string, _ is \t\t%p\n", strrchr(str, '_'));
    printf("return of ft_strrchr for string, _ is \t\t%p\n", ft_strrchr(str, '_'));
    printf("return of strrchr for string, '^' is \t\t%p\n", strrchr(str, '^'));
    printf("return of ft_strrchr for string, '^' is \t%p\n", ft_strrchr(str, '^'));
    printf("return of strrchr for string, '{' is \t\t%p\n", strrchr(str, '{'));
    printf("return of ft_strrchr for string, '^{' is \t%p\n", ft_strrchr(str, '{'));
    printf("return of strrchr for string, '|' is \t\t%p\n", strrchr(str, '|'));
    printf("return of ft_strrchr for string, '|' is \t%p\n", ft_strrchr(str, '|'));
    printf("return of strrchr for string, '~' is \t\t%p\n", strrchr(str, '~'));
    printf("return of ft_strrchr for string, '~' is \t%p\n", ft_strrchr(str, '~'));
    return (0);
}
