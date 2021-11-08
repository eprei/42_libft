/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:04:51 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/08 11:58:54 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (!dstsize)
		return (src_len);
	while (src[i] != '\0' && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize < src_len)
		dst[dstsize - 1] = '\0';
	else if (dstsize != 0)
		dst[i] = '\0';
	return (src_len);
}
/*
int	main(void)
{
	char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);

//	strlcpy(dest, src, 6);	
//	printf("The result for strlcpy is: %s\n", dest);
//	printf("The result for strlcpy is: %lu\n", strlcpy(dest, src, 6));
	ft_strlcpy(dest, src, 6);
	printf("The result for strlcpy is: %s\n", dest);
	printf("The result for ft_strlcpy is: %lu\n", ft_strlcpy(dest, src, 6));
	return (0);
}*/