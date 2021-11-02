#include "libft.h"

int     main()
{
    char str1a[13]= "Hola que mal";
    char str1b[13]= "222222222222";
    char str2a[13]= "Hola que tal";
    char str2b[13]= "111111111111";

    printf("\nSource before memcpy: %s\n", str1a);
    printf("Destination before memcpy: %s\n", str1b);
    memcpy(str1b, str1a, 13);
    printf("The Destination after memcpy looks like: %s\n", str1b);
    printf("And it adress is %p\n\n", memcpy(str1b, str1a, 12));
    printf("Source before ft_memcpy: %s\n", str2a);
    printf("Destination before ft_memcpy: %s\n", str2b);
    ft_memcpy(str2b, str2a, 13);
    printf("The Destination after ft_memcpy looks like: %s\n", str2b);
    printf("And it adress is %p\n\n", ft_memcpy(str2b, str2a, 13));
    
    printf("\nthe result of memcpy for NULL arguments is:\t%p\n", memcpy(((void *)0), ((void *) 0), 3));
    printf("the result of ft_memcpy for NULL arguments is:\t%p\n", ft_memcpy(((void *)0), ((void *) 0), 3));

//  printf("\nthe result of memcpy for NULL arguments is:\t%p\n", memcpy(((void *)0), "segfaulter tu dois", 17));
//  printf("the result of ft_memcpy for NULL arguments is:\t%p\n", ft_memcpy(((void *)0), "segfaulter tu dois", 17));

    return (0);
}