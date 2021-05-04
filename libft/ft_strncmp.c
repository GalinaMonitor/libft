#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t nmb)
{
	if (nmb == 0)
		return (0);
	while (nmb > 1 && *first && *second && *first == *second)
	{
		first++;
		second++;
		nmb--;
	}
	return (*(unsigned char *)first - *(unsigned char *)second);
}
