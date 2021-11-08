/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:42:08 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/08 12:15:01 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			index;

	index = 0;
	ptr1 = (unsigned char *) dst;
	ptr2 = (unsigned char *) src;
	if ((src == NULL) && (dst == NULL))
		return (NULL);
	else if (ptr1 > ptr2)
	{
		while (len > 0)
		{
			ptr1 [len - 1] = ptr2 [len - 1];
			len--;
		}
	}
	while (index < len)
	{
		ptr1[index] = ptr2[index];
		index++;
	}
	return (dst);
}
