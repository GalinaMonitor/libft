#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t nmb)
{
	unsigned char *dest_cast;
	unsigned char *src_cast;

	dest_cast = (unsigned char *)dest;
	src_cast = (unsigned char *)src;
	while (nmb > 0 && src != dest)
	{
		*dest_cast = *src_cast;
		dest_cast++;
		src_cast++;
		nmb--;
	}
	return (dest);
}
