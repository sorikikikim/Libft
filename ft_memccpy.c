#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	div;
	size_t		i;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	div = c;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == div)
			return (dst[i + 1]);
		i++;
	}
	return (0);
}	
