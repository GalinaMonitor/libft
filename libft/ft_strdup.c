#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t size;
	char *str;

	size = ft_strlen(s) + 1;
	str = (char *)malloc(sizeof(char) * size);
	ft_strlcpy(str, s, size);
	return (str);
}
