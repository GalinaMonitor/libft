#include "libft.h"

char	*ft_tolower(char *str)
{
	int ind;

	ind = 0;
	while (str[ind])
	{
		if (str[ind] >= 'a' && str[ind] <= 'z')
			str[ind]-= 32;
		ind++;
	}
	return (str);
}
