/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:04:51 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/03 16:00:23 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	i = 0;
	while ((i < dstsize) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	while (i < dstsize)
	{
		dst[i] = '\0';
		i++;
	}
	return (len_dst);
}
// el printf salta como alerta en el test ya que es una funcion invalida

int main()
{
	char str1 [15]= "Test one";
	char str2 []= "";
	char str3 [15]= "Test one";
	char str4 []= "";
	
	printf("strlcpy result is:\t%li\n", strlcpy(str1, str2, 2));
	printf("ft_strlcpy result is:\t%zu\n", ft_strlcpy(str4, str3, 2));
	return (0);
}