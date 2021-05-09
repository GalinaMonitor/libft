/*
**@file					ft_substr.c
**@author				Gmonitor (gmonitor@student.21-school.ru)
**@date					2021-05-10
**
**@brief				Allocates (with malloc(3)) and returns a substring
						from the string ’s’.
						The substring begins at index ’start’ and is of
						maximum size ’len’.
**
**@used_functions		ft_strdup, ft_strnew
**						!No protection from input NULL!
*/
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
		return (NULL);
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
