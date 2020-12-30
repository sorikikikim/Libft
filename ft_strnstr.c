/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 02:43:16 by sorkim            #+#    #+#             */
/*   Updated: 2020/12/30 16:02:38 by sorkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	char	*s;

	if (to_find == 0)
		return (str);
	while (str[i] && len > 0)
	{
		i = 0;
		str = s;
		while ((to_find[i] == str[i]) && (to_find[i]) && (i - len > 0))
			i++;
		if (to_find == 0)
			return (s);
		i++;
		len--;
	}
	return (0);
}
