#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*str;

	if (s1 == 0 || set == 0)
		return (0);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != 0)
		i++;
	len = ft_strlen(s1);
	while (len && s1[len - 1] && ft_strchr(set, s1[len - 1]) != 0)
		len--;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (0);
	ft_memcpy(str, s1, len);
	str[len] = 0;
	return (str);
}
