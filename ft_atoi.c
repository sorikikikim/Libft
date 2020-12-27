#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t i;
	int minus;
	int result;

	i = 0;
	minus = 1;
	result = 0;
	while(str[i])
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		if (str[i] == '-')
			minus *= -1;
		if (str[i] == '+' || str[i] == '-')
			i++;
		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			result = (result * 10) + (str[i] - '0');
			i++;
		}
	}
	return (result * minus);
}
