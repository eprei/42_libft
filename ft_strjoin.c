/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:44:50 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/03 15:57:43 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned long long int	len_s1;
	unsigned long long int	len_s2;
	char					*ptr;
	unsigned long long int	i;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ptr = malloc(len_s1 + len_s2 + (1 * (sizeof(char))));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[i - len_s1] != '\0')
	{
		ptr[i] = s2[i - len_s1];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
