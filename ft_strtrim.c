/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:44:59 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/08 17:10:43 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;

	ptr = (char *)malloc((ft_strlen(s1) + 1 ) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	free (ptr);
}

int	main(void)
{
	return (0);
}

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
