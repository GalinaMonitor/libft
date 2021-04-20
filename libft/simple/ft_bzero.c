#include "libft.h"

void	ft_bzero(void *s1, size_t nmb)
{
	while(nmb > 0)
	{
		*((char *)s1) = '\0';
		s1++;
	}
}
