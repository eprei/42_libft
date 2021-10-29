#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	(void) argc;
	printf("atoi result:  %d\n", atoi(argv[1]));
	printf("ft_atoi result: %d\n", ft_atoi(argv[1]));
	return (0);
}
