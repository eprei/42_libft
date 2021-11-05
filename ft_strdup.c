/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:44:09 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/05 16:43:37 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char				*ptr;
	unsigned long int	i;

	i = 0;
	ptr = malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
	free(ptr);
}

// programar: set erno to ENOMEM