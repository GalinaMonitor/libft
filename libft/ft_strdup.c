#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*str;

	size = ft_strlen(s);
	str = ft_strnew(size);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s, size + 1);
	return (str);
}
