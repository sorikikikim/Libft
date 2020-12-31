/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 17:38:13 by sorkim            #+#    #+#             */
/*   Updated: 2020/12/30 20:11:21 by sorkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strs_len(char const *s, char c)
{
	size_t len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static size_t	sep_strs(char const *s, char c)
{
	size_t i;
	size_t sep;

	i = 0;
	sep = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		sep++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (sep);
}

static void		mem_free(char **s, int i)
{
	while (i)
	{
		free(s[i]);
		i--;
	}
	free(s);
}

static char		*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*result;

	result = (char *)malloc(sizeof(char) * (n + 1));
	if (result == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = 0;
	return (result);
}

char			**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;
	size_t	i;
	size_t	strlen;

	count = strs_len(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (result == 0)
		return (0);
	i = 0;
	while (i < count)
	{
		while (s[i] && s[i] == c)
			i++;
		strlen = sep_strs(s, c);
		if (!(result[i] = ft_strndup(s, strlen)))
		{
			mem_free(result, i - 1);
			return (0);
		}
		s += strlen;
		i++;
	}
	result[count] = 0;
	return (result);
}
