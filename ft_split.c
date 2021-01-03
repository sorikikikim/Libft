/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 17:38:13 by sorkim            #+#    #+#             */
/*   Updated: 2021/01/03 18:09:33 by sorkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_strs(char const *s, char c)
{
	size_t count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s != 0 && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char	**result;
	char	*start;
	size_t	i;
	size_t	len;

	if (!(result = (char **)malloc(sizeof(char *) * (count_strs(s, c) + 1))))
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s != 0 && *s != c)
				s++;
			len = s - start + 1;
			if (!(result[i] = (char *)malloc(len)))
				return (0);
			ft_strlcpy(result[i++], start, len);
		}
		else
			s++;
	}
	result[i] = 0;
	return (result);
}
