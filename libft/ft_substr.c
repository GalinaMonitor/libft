#include "libft.h"
char *ft_substr(char const *str, unsigned int start, size_t len)
{
	char *dest;

	dest = malloc(sizeof(char) * len);
	if (dest == NULL)
		return (NULL);
	while (start > 0)
	{
		str++;
		start--;
	}
	while (*str && len > 0)
	{
		*dest = *str;
		len--;
		str++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
