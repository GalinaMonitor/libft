#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t n;
	n = ft_strlen(little);
	if (n = 0)
		return (big);
	while(*big)
	{
		if(strncmp(big ,little, n) == 0)
			return (big);
		big++;
		little++;
	}
	return (NULL);
}
