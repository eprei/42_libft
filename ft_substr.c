/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:44:39 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/03 19:58:24 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rtn;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	rtn = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!rtn)
		return (0);
	while (i < len)
	{
		rtn[i] = *(s + start + i);
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
