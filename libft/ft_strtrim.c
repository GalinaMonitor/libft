#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*result;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	result = ft_substr((char *)s1, 0, len + 1);
	return (result);
}
