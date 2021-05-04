#include "libft.h"

void	*ft_memchr(void *src, int c, size_t nmb)
{
	unsigned char	*src_cast;

	src_cast = (unsigned char *)src;
	while (nmb > 0)
	{
		if (*src_cast == (unsigned char)c)
			return (src_cast);
		src_cast++;
		nmb--;
	}
	return (NULL);
}
