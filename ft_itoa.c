#include "libft.h"

static size_t	num_count(int n, int base)
{
	size_t count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0 && base == 10)
		count += 1;
	while (n)
	{
		n /= base;
		count += 1;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	size;
	size_t	flag;
	char	*result;

	flag = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = num_count(n, 10);
	result = (char *)malloc(sizeof(char) * size + 1);
	if (result == 0)
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
		result[size] = (n % 10) + '0';
		n /= 10;
		size--;
	}
	return (result);
}
