#include "libft.h"

char	*ft_toupper(char *str)
{
	int ind;

	ind = 0;
	while (str[ind])
	{
		if (str[ind] >= 'A' && str[ind] <= 'Z')
			str[ind]+= 32;
		ind++;
	}
	return (str);
}
