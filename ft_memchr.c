#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	search;
	size_t		i;

	str = s;
	search = c;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return(str[i]);
		i++;
	}
	return (0);
}
