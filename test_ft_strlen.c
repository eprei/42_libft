#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char *str1 = argv[1];

    if (argc != 1)
    {
        printf("return of strlen argv[1] \t%lu\n", strlen(str1));
        printf("return of ft_strlen argv[1] \t%zu\n", ft_strlen(str1));
    }
    else
      return (0);
}