/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:35:12 by epresa-c          #+#    #+#             */
/*   Updated: 2021/10/27 15:33:08 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = ft_strlen(s);
	if (ft_isascii(c) == 0)
		return (0);
	else if (i)
	{
		while (i >= 0)
		{
			if ((s[i] == (char) c))
				return ((char *)s + i);
			i--;
		}
		return (0);
	}
	else
		return (0);
}
