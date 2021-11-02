/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:42:08 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/02 16:31:08 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
//	unsigned char	*ptr1;
//	unsigned char	*ptr2;
	size_t			index;

	index = 0;
//	ptr1 = (unsigned char *) dst;
//	ptr2 = (unsigned char *) src;
	if ((src == NULL) && (dst == NULL))
		return (NULL);
	else if (dst > src)
	{
		while (len > 0)
		{
			dst [len - 1] = src [len - 1];
			len--;
		}
		return (dst);
	}
	else
	{
		while (index < len)
		{
			dst[index] = src[index];
			index++;
		}
	}
	return (NULL);
}
