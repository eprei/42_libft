/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:45:18 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/04 15:35:53 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int c)
{
	unsigned int	i;
	unsigned int 	x;

	x = (unsigned int) c;
	i = 0;
	while (x > 9)
	{
		x = x / 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int	i;
	int len_n;

	len_n = ft_intlen(n);
	i = 0;
	ptr = malloc(sizeof(char) * len_n + 2 * (sizeof(char)));
	while (len_n >= i)
	{
		ptr[len_n - i]= n % 10 + '\0';
		n = n % 10;
		i++; 
	}
	ptr[len_n + 1] = '\0';
	return (ptr);
}
/*
int	main()
{
	int x;

	x = -123456789;
	printf("ft_itoa for %d is %s\n", x, ft_itoa(x));
	return (0);
}*/