#include "libft.h"

size_t	ft_strlcpy (char *dest, const char *src, size_t size)
{
	size_t count;

	size--;
	while (*src && size > 0)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = '\0';
	return (ft_strlen(src));
}
