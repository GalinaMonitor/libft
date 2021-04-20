#include "libft.h"

void	*memmove(void* dest, const void* src, size_t nmb)
{
	nmb--;
	if (src > dest)
	{
		while (nmb > 0)
		{
			*((unsigned char *)dest) = *((const unsigned char *)src);
			dest++;
			src++;
			nmb--;
		}
	}
	else if (src < dest)
	{
		src+= nmb;
		dest+= nmb;
		while (nmb > 0)
		{
			*((unsigned char *)dest) = *((const unsigned char *)src);
			dest--;
			src--;
			nmb--;
		}
	}
	return (dest);
}
