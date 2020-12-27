#include "libft.c"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t		i;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;
	if (d > s)
	{
		while (len > 0)
		{
			d[len] = s[len];
			len--;
		}
	}
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
