/*
**@file					ft_strjoin.c
**@author				Gmonitor (gmonitor@student.21-school.ru)
**@date					2021-05-10
**
**@brief				Function allocate memory and joins two strings
**
**@used_functions		ft_strlen, ft_strnew, ft_strlcpy
**						!No protection from input NULL!
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		count_s1;
	int		count_s2;
	char	*dest;

	count_s1 = ft_strlen(s1);
	count_s2 = ft_strlen(s2);
	dest = ft_strnew(count_s1 + count_s2);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s1, count_s1 + 1);
	dest += count_s1;
	*dest = '1';
	ft_strlcpy(dest, s2, count_s2 + 1);
	dest -= count_s1;
	return (dest);
}
