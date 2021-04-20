#include "libft.h"

void	*memchr(void* src, int c, size_t nmb)
{
	while (nmb > 0)
	{
		nmb--;
		if (*((unsigned char *)src) = c)
			return (src);
		src++;
		nmb--;
	}
	return (NULL);
}
