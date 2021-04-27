#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t nmb)
{
	while (nmb > 0 && *first && *second)
	{
		if (*first == *second)
		{
			first++;
			second++;
			nmb--;
		}
		else
			return (*(unsigned char *)first - *(unsigned char *)second);
	}
	if (*first == '\0' && *second != '\0')
		return (-1);
	if (*first != '\0' && *second == '\0')
		return (1);
	else
		return 0;
}
