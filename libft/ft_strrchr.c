#include "libft.h"

char	*strrchr(const char *s, int c)
{
	size_t len;
	char *str;

	str = (char *)s;
	len = ft_strlen(s);
	str+= len;
	while (len > 0)
	{
		if (*str == c)
			return (str);
		str++;
		len--;
	}
	return (NULL);
}
