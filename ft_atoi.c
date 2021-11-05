/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:11:59 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/05 14:51:54 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_maj(long long int c)
{
	if (c > 2147483647)
		return (1);
	return (0);
}

static int	ft_is_min(long long int c)
{
	if (c < -2147483648)
		return (1);
	return (0);
}

static int	ft_check(char c)
{
	if ((c == ' ') || (c == '\t') || (c == '\n')
		|| (c == '\v') || (c == '\f') || (c == '\r'))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	unsigned long long int	result;
	unsigned long long int	i;
	int						sign;

	sign = 1;
	result = 0;
	i = 0;
	while (ft_check(str[i]))
		i++;
	if (str[i] == '-')
	{		
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i])
	{
		if (ft_is_maj(sign * result))
			return (-1);
		if (ft_is_min(sign * result))
			return (0);
		else if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		else
			break ;
		i++;
	}
	return (sign * result);
}
/*
int	main()
{
	printf("the return of ft_atoi is: %d\n", ft_atoi("-+42"));
	printf("the return of atoi is: %d\n", atoi("-+42"));	
	return(0);
}*/