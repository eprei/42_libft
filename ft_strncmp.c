/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:58:03 by epresa-c          #+#    #+#             */
/*   Updated: 2021/10/26 14:58:06 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 || *s2) && (i < n))
	{
		if (*s1 != *s2)
			return (((unsigned char)*s1) - ((unsigned char)*s2));
		s1++;
		s2++;
		i++;
	}
	return (0);
}
