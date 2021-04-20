#include "libft.h"

int memcmp(const void *src, const void *src2, size_t nmb)
{
	nmb--;
	while (nmb > 0)
	{
		if (*((unsigned char *)src) != *((unsigned char *)src2))
			return (*((unsigned char *)src) - *((unsigned char *)src2));
		nmb--;
		src++;
		src2;
	}
	return (0);
}
