#include "libft.h"

static int	ft_char_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s != c && *s)
	{
		s++;
		count++;
	}
	return (count);
}

static int	ft_words_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c && *s)
				s++;
			count++;
		}
		else
			s++;
	}
	return (count + 1);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	int		ind;
	int		word_size;
	char	**mass;

	ind = 0;
	words = ft_words_count(s, c);
	mass = (char **)malloc(sizeof(char *) * words + 1);
	if (mass == NULL)
		return (NULL);
	while (words > 1)
	{
		if (*s == c)
			while (*s == c)
				s++;
		word_size = ft_char_count(s, c);
		mass[ind] = ft_strnew(word_size);
		if (mass[ind] == NULL)
			return (NULL);
		ft_strlcpy(mass[ind], s, word_size + 1);
		s += word_size;
		ind++;
		words--;
	}
	mass[ind] = NULL;
	return (mass);
}
