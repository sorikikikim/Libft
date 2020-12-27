#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	unsigned char find;

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
