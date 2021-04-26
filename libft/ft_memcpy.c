#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t nmb)
{
	nmb--;
	while (nmb > 0 && *((unsigned char *)src))
	{
		*((unsigned char *)dest) = *((unsigned char *)src);
		dest++;
		src++;
		nmb--;
	}
	return (dest);
}
