/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:42:08 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/05 12:32:38 by Emiliano         ###   ########.fr       */
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
		return (dst);
	}
	else
	{
		while (index < len)
		{
			ptr1[index] = ptr2[index];
			index++;
		}
	}
	return (NULL);
}

// Estudiar
/*
int	main()
{
	char s[] = {65, 66, 67, 68, 69, 0, 45};
	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
	char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

//	printf("s0 antes:\t%s\n", s0);
//	ft_memmove(s0, s, 7);
//	memmove(s0, s, 7);
//	printf("s0 despues:\t%s\n", s0);

//	printf("s antes:\t%s\n", s);
//	ft_memmove(s, s + 2, 0);
//	memmove(s, s + 2, 0);
//	printf("s despues:\t%s\n", s);

//	printf("s antes:\t%s\n", s);
//	ft_memmove(s, s + 2, 2);
//	memmove(s, s + 2, 2);
//	printf("s despues:\t%s\n", s);

	printf("sResult antes:\t%s\n", sResult);
//	ft_memmove(sResult + 1, sResult, 2);
	memmove(sResult + 1, sResult, 2);	
	printf("sResult despues:%s\n", sResult);
	return (0);
}*/