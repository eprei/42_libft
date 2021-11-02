#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main()
{
	char n[40] = "99999999999999999999999999";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);

	printf("atoi result:  %d\n", i1);
	printf("ft_atoi result: %d\n", i2);
	return (0);
}
