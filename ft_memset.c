#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char		*str;
	unsigned char	value;
	size_t		i;

	str = b;
	value = c;
	i = 0;
	while (i < len)
	{
		str[i] = value;
		i++;
	}
	return (b);
}
