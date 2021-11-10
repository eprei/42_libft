/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:04:51 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/10 11:24:43 by Emiliano         ###   ########.fr       */
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

	printf("The source before strlcpy is: %s\n", src);
	printf("The dest before strlcpy is: %s\n\n", dest);
	strlcpy(dest, src, 6);	
	printf("The source after strlcpy is: %s\n", src);
	printf("The dest after strlcpy is: %s\n\n", dest);
	printf("The return for strlcpy is: %lu\n", ft_strlcpy(dest, src, 6));

	printf("The source before ft_strlcpy is: %s\n", src);
	printf("The dest before ft_strlcpy is: %s\n\n", dest);
	ft_strlcpy(dest, src, 6);
	printf("The source after ft_strlcpy is: %s\n", src);
	printf("The dest after ft_strlcpy is: %s\n\n", dest);
	printf("The return for ft_strlcpy is: %lu\n", ft_strlcpy(dest, src, 6));

	return (0);
}*/