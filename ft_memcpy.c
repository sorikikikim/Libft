#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t		i;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
