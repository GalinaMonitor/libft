#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t nmb)
{
	int count;

	nmb--;
	count = 0;
	while (nmb > 0 && *((unsigned char *)src))
	{
		if (*((unsigned char *)src) = c)
		{
			*((unsigned char *)dest) = c;
			return (dest - count);
		}
		*((unsigned char *)dest) = *((unsigned char *)src);
		dest++;
		src++;
		nmb--;
		count++;
	}
	return (NULL);
}
