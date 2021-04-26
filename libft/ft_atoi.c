#include "libft.h"

int	ft_atoi(const char *str)
{
	int nbr;
	int min;

	nbr = 0;
	while (*str == ' ')
		str++;
	if (*str == '+')
	{
		min = 1;
		str++;
	}
	else if (*str == '-')
	{
		min = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr*= 10;
		nbr+= *str - 48;
		str++;
	}
	return (nbr);
}
