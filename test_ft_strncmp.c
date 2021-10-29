#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main()
{
	char	*str1;
	char	*str2;

    str1 = "Heyoo";
    str2 = "zz";
    int i = 99;

    printf("strncmp of: %s\t%s\t%d is\t%d\n", str1, str2, i, strncmp(str1, str2, i));
    printf("ftstrncmp of: %s\t%s\t%d is\t%d\n", str1, str2, i, ft_strncmp(str1, str2, i));
    return (0);
}
