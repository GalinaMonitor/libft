#include "libft.h"

void	ft_bzero(void *s1, size_t nmb)
{
	unsigned char	*s1_cast;

	s1_cast = (unsigned char *)s1;
	while (nmb > 0)
	{
		*s1_cast = '\0';
		s1_cast++;
		nmb--;
	}
}
