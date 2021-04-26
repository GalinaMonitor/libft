#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}
