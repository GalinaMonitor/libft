#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	ind;

	ind = 0;
	result = ft_strnew(ft_strlen(s));
	if (result == NULL)
		return (NULL);
	while (s[ind])
	{
		result[ind] = f(ind, s[ind]);
		ind++;
	}
	result[ind] = '\0';
	return (result);
}
