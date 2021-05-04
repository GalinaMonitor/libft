/* Function makes char from int. Delete non-printable characters. */
/* Works as original atoi(--++45 = 0; -45 = -45) */
#include "libft.h"

int	ft_atoi(const char *str)
{
	long	nbr;
	int		min;

	min = 1;
	nbr = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		min = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr *= 10;
		nbr += *str - 48;
		str++;
	}
	return ((int)nbr * min);
}
