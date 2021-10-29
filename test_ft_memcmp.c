#include "libft.h"

int main()
{
    char *str1 = "Cadenauno";
    char *str2 = "Cadenauno";
    char *str3 = "Cadenauno";
    char *str4 = "Cadenaunn";
    char *str5 = "Cadenauno";
    char *str6 = "Cadenaunp";
    int i;

    i = 11;
    printf("The return of memcmp is: %d\n", memcmp(str1, str2, i));
    printf("The return of ft_memcmp is: %d\n", ft_memcmp(str1, str2, i));
    printf("The return of memcmp is: %d\n", memcmp(str3, str4, i));
    printf("The return of ft_memcmp is: %d\n", ft_memcmp(str3, str4, i));
    printf("The return of memcmp is: %d\n", memcmp(str5, str6, i));
    printf("The return of ft_memcmp is: %d\n", ft_memcmp(str5, str6, i));
    return (0);
}