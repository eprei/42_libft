/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:45:09 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/08 17:11:14 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_char(const char *s, char c)
{
	unsigned long long	i;

	i = 0;
	while (s[i] != 'c')
		i++;
	return (i);
}

static int	ft_counter_char(char const *str, char x)
{
	long int	i;

	i = 0;
	while (*str)
	{
		if (*str == x)
			i++;
		str++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{		
	char	*ptr;

	ptr = (char *)malloc((ft_strlen(s) + ft_strlen_char(s, c) + 1)
			* sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (*ptr != 'c' && *ptr != '\0')
		*ptr++ = *s++;
	*ptr = '\0';
	return (ptr);
}

int	main(void)
{
	char		*str;
	size_t		i;

	str = "Hello world!";
	printf("The return of ft_split is: %s", (ft_split(str, 'r')));
	return (0);
}
