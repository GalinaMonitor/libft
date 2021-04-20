#include "libft.h"

char	*strrchr(const char *s, int c)
{
	size_t len;

	len = t_strlen(s);
	s+= len;
	while (len > 0)
	{
		if (*s == c)
			return (s);
		s++;
		len--;
	}
	return (NULL);
}
