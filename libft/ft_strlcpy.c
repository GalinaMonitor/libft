#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t count;

	count = ft_strlen(src);
	if (size == 0)
		return (count);
	while (*src && size > 1)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = '\0';
	return (count);
}
