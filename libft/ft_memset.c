#include "libft.h"

void	*ft_memset(void *s1, int c, size_t nmb)
{
	int count;

	nmb--;
	count = 0;
	while(nmb > 0)
	{
		*((unsigned char *)s1) = c;
		s1++;
		nmb--;
		count++;
	}
	s1-= count;
	return(s1);
}
