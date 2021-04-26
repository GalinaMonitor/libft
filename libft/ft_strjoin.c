#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int count_s1;
	int count_s2;
	char *dest;

	count_s1 = ft_strlen(s1);
	count_s2 = ft_strlen(s2);
	dest = malloc(sizeof(char) * (count_s1 + count_s2 + 1));
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s1, count_s1);
	dest+= count_s1;
	ft_strlcpy(dest, s2, ft_strlen(s2));
	return (dest);
}
