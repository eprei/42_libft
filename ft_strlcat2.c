/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:42:46 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/05 16:48:59 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;

	i = 0;
	j = 0;
	len_dst = ft_strlen(dst);
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && i < size - 1)
		dst[i++] = src[j++];
	if (size != 0 && size >= len_dst)
		dst[i] = '\0';
	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + len_dst);
}
//estudiar y mejorar

int	main()
{
	char str1[27] = "Hello World";
	char str2[100] = " whats up 123456789";
	char ptr1[27] = "Hello world";
	char ptr2[100] = " whats up 123456789";
	
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = 0;

//	ft_strlcat(buff2, str, max);
	strlcat(buff2, str, max);	
	printf("the result is:\t%s\n", buff2);
//	strlcat(str2, str1, 0);
//	ft_strlcat(str2, str1, 0);

	return(0);
}