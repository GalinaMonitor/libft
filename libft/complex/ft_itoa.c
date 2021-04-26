#include "libft.h"

int		static ft_intlen(int n)
{
	int count;

	count = 1;
	while (n > 0)
	{
		n/= 10;
		count++;
	}
	return (count);
}

void	static *ft_translate(char *word, int count)
{
	if (*word == '-')
		word++;
	word+= count;
	word = '\0';
	word--;
	while (count > 0)
	{
		*word = count % 10 + 48;
		count/= 10;
		word--;
	}
}

char	*ft_itoa(int n)
{
	int count;
	char *word;

	count = ft_intlen(n);
	word = ft_strnew(count + 1);
	if (n < 0)
		*word = '-';
	ft_translate(word, count);
	return (word);
}

