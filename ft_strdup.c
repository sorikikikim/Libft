#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	i;
	char	*s;

	len = ft_strlen(str);
	i = 0;
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == 0)
		return (0);
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = 0;
	return (s);
}
