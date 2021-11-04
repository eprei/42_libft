/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:45:09 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/04 11:43:53 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{	
	unsigned long long int	i;
	unsigned long long int	j;
	char					*ptr[2];
	char					**ret;

	i = 0;
	while (s[i] != c)
		i++;
	ptr[0] = malloc(sizeof(char) * i + 1 * sizeof(char));
	if (ptr[0] == NULL)
		return (NULL);
	ft_memcpy(ptr[0], s, i);
	ptr[0][i] = '\0';
	j = 0;
	while (s[i + j] != '\0')
		j++;
	ptr[1] = malloc(sizeof(char) * j + 1 * sizeof(char));
	if (ptr[1] == NULL)
		return (NULL);
	ft_memcpy(ptr[1], s + i, j);
	ptr[1][j] = '\0';
	ret = ptr;
	return (ret);
	free(ptr[0]);
	free(ptr[1]);
}
