/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:42:46 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/04 18:13:46 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t 	limit;
	
	i = 0;
	j = 0;
	limit = dstsize - ft_strlen(dst) - (1 * sizeof(char));
	while (dst[i] != '\0' && ft_isprint(dst[i]))
		i++;
	while ((src[j] != '\0') && (j < limit))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i + j] = '\0';
	return (i + j - 1);
}

int main()
{
	char str1[27] = "Hello World";
	char str2[100] = " whats up 123456789";
	char ptr1[27] = "Hello world";
	char ptr2[100] = " whats up 123456789";
/*	
	printf("\nThe size of str1 is %lu, and his lenght is %lu\n", sizeof(str1), ft_strlen(str1));
	printf("So sizeof(str1) - ft_strlen(str1) is %lu\n\n", (sizeof(str1) - ft_strlen(str1)));
	printf("The size of ptr1 is %lu, and his lenght is %lu\n", sizeof(ptr1), ft_strlen(ptr1));
	printf("So sizeof(ptr1) - ft_strlen(ptr1) is %lu\n\n", (sizeof(ptr1) - ft_strlen(ptr1)));
*/
	printf("The return of strlcat is %lu\n", strlcat(str1, str2, sizeof(str1)));
	printf("The return ft_strlcat is %lu\n\n", ft_strlcat(ptr1, ptr2, sizeof(ptr1)));

	strlcat(str1, str2, sizeof(str1));
	ft_strlcat(ptr1, ptr2, sizeof(ptr1));


	printf("The result of strlcat is:\t%s\n", str1);
	printf("The result of ft_strlcat it:\t%s\n", ptr1);

	return (0);
}