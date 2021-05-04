#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*dest;
	int		temp;

	temp = len;
	if (len <= 0 || start >= ft_strlen(str))
		return (ft_strdup(""));
	dest = ft_strnew(len);
	if (dest == NULL)
	{
		free(dest);
		return (NULL);
	}
	str += start;
	while (*str && len > 0)
	{
		*dest = *str;
		len--;
		str++;
		dest++;
	}
	dest -= temp;
	return (dest);
}
