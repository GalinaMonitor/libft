#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(size_t, char))
{
	char *result;
	size_t ind;

	ind = 0;
	result = NULL;
	if (s && f && (result = ft_strnew(ft_strlen(s))))
	{
		while (s[ind])
		{
			result[ind] = f(ind, s[ind]);
			ind++;
		}
		result[ind] = '\0';
	}
	return (result);
}
