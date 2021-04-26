#include "libft.h"

static	int	ft_char_search(char const *s1, char const letter)
{
	while(*s1)
	{
		if (*s1 == letter)
			return (1);
		s1++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *result;
	int len;
	int count;

	count = 0;
	len = ft_strlen(s1);
	result = (char *)malloc(sizeof(char) * len + 1);
	if (result == NULL)
		return (NULL);
	while (*s1)
	{
		while (*set)
		{
			if (ft_char_search(s1, *set) == 1)
			{
				count++;
				break;
			}
			else
				set++;
		}
		if (count == 0)
			*result = *set;
		s1++;
		count = 0;
	}
	*result = '\0';
	return (result);
}
