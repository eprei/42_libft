#include "libft.h"

int main()
{
    char *str1 = "";
    int i; 

    i = 15;
    printf("This is the return of memchr: \t\t%p\n", memchr(str1, 'g', i));
    printf("This is the return of ft_memchr: \t%p\n", ft_memchr(str1, 'g', i));
    printf("This is the return of memchr: \t\t%p\n", memchr(str1, 'h', i));
    printf("This is the return of ft_memchr: \t%p\n", ft_memchr(str1, 'h', i));
    return (0);
}