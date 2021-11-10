/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:45:09 by epresa-c          #+#    #+#             */
/*   Updated: 2021/11/10 11:11:09 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	**ft_free_error(char **tab)
 {
 	unsigned int	i;
	
	if (!tab)
		return (NULL);
 	i = 0;
 	while (tab[i])
 	{
 		free(tab[i]);
 		i++;
 	}
 	free(tab);
 	return (NULL);
 }
*/
static size_t	ft_words(char const *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		if (*s != c)
		{
			words++;
			while (*s != '\0' && *s != c)
				s++;
		}
		s++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	size_t		len;
	size_t		index;
	const char	*start;
	char		**split;

//	if (!s)
//		return (NULL);
//	if (!(split = (char **) malloc(((ft_words(s, c)) + 1) * sizeof(*split))))
//		return (ft_free_error(split));
	if (!s || (!(split = (char **) malloc(((ft_words(s, c)) + 1) * sizeof(*split)))))
		return (NULL);
	index = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		start = s;
		len = 0;
		while (*s && *s != c)
		{
			s++;
			len++;
		}
		if (*(s - 1) != c)
			split[index++] = ft_substr(start, 0, len);
	}
	split[index] = 0;
	return (split);
}
/*
int main()
{
	char	*str;

	str = "hoca que cal amicos";
	ft_split(str, 'c');
	return (0);
}*/