/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 17:37:28 by sorkim            #+#    #+#             */
/*   Updated: 2021/01/03 17:14:27 by sorkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_len(int n)
{
	size_t len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	size_t	size;
	size_t	flag;
	char	*result;

	flag = 0;
	size = num_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(result = (char *)malloc(sizeof(char) * size + 1)))
		return (0);
	result[size] = 0;
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
		flag += 1;
	}
	while (flag < size)
	{
		result[size - 1] = (n % 10) + '0';
		n /= 10;
		size--;
	}
	return (result);
}
