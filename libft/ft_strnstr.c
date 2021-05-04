#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;
	char	*little_temp;
	char	*big_temp;

	little_temp = (char *)little;
	big_temp = (char *)big;
	n = ft_strlen(little_temp);
	if (n == 0)
		return (big_temp);
	while (*big_temp && len > n - 1)
	{
		if (ft_strncmp(big_temp, little_temp, n) == 0)
			return (big_temp);
		big_temp++;
		len--;
	}
	return (NULL);
}
