#include "libft.h"

static int	ft_intlen(long n)
{
	int	count;

	count = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	long	n;
	int		ind;
	int		count;
	char	*word;

	n = (long)nbr;
	ind = 0;
	count = ft_intlen(n);
	word = ft_strnew(count + 1);
	if (word == NULL)
	{
		free(word);
		return (NULL);
	}
	ind += count - 1;
	if (n < 0)
	{
		word[0] = '-';
		n *= -1;
		ind++;
	}
	if (count == 0)
	{
		word[0] = '0';
		return (word);
	}
	while (n > 0)
	{
		word[ind] = n % 10 + 48;
		n /= 10;
		ind--;
	}
	return (word);
}
