/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 02:43:48 by sorkim            #+#    #+#             */
/*   Updated: 2020/12/28 12:30:14 by sorkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	find;

	find = c;
	i = 0;
	while (s[i])
		i++;
	while (s[i])
	{
		if (s[i] == find)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
