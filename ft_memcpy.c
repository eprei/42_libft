/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:24:41 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/01 12:28:11 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
			ptr1++;
			ptr2++;
			n--;
		}
		return (dst);
	}
	return (NULL);
}
