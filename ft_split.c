/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 17:38:13 by sorkim            #+#    #+#             */
/*   Updated: 2021/01/05 21:39:03 by sorkim           ###   ########.fr       */
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

static char		**mem_free(char **result, int i)
{
	while (i > 0)
	{
		i--;
		free(result[i]);
	}
	free(result);
	return (0);
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
				return (mem_free(result, i));
			ft_strlcpy(result[i++], start, len);
		}
		else
			s++;
	}
	result[i] = 0;
	return (result);
}
