#include "libft.h"

void	*ft_memset(void *s1, int c, size_t nmb)
{
	unsigned char *cast;

	cast = (unsigned char *)s1;
	while(nmb > 0)
	{
		*cast = (unsigned char)c;
		cast++;
		nmb--;
	}
	return(s1);
}
