/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:39:42 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/10 14:57:24 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *) dst;
	ptr2 = (unsigned char *) src;
	if ((src == NULL) && (dst == NULL))
		return (NULL);
	{
		while (n > 0)
		{
			*ptr1 = *ptr2;
			if (*ptr2 == (unsigned char) c)
				return ((void *) ptr1 + 1);
			ptr1++;
			ptr2++;
			n--;
		}
	}
	return (NULL);
}
