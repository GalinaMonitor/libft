#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t nmb)
{
	while (nmb > 0)
	{
		if (*first == *second)
		{
			first++;
			second++;
			nmb-=1;
		}
		else
			return (*first - *second);
	}
	return 0;
}
