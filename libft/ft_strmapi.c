/*
**@file					ft_strmapi.c
**@author				Gmonitor (gmonitor@student.21-school.ru)
**@date					2021-05-10
**
**@brief				Applies the function ’f’ to each character of the
**						string ’s’ to create a new string (with malloc(3))
**						resulting from successive applications of ’f’.
**
**@used_functions		ft_strnew, ft_strlen
**						!No protection from input NULL!
*/
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
