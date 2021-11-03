/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:11:59 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/03 14:59:48 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static int	ft_is_int(long long int c)
{
	if ((-2147483648 <= c) && (c <= 2147483647))
		return (1);
	return (0);
}

static int	ft_str_to_long(const char *str)
{
	if (ft_strlen(str) > 11)
		return (1);
	return (0);
}
*/

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
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		else
			break ;
		i++;
	}
	return (sign * result);
}
