#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t s_len;

	s_len = 0;
	if (src[s_len])
		s_len++;
	if (dstsize == 0)
		return (s_len);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (s_len);
}
