/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:35:12 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/05 16:09:00 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned long long int	i;
	char			*ptr;

	i = 0;
	ptr = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			ptr = (char *)(s + i);
		i++;
	}
	if (s[i] == (char) c)
		ptr = (char *)(s + i);
	return (ptr);
}
