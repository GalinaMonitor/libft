#include "libft.h"

int		static ft_char_count(char const *s, char c)
{
	int count;

	count = 0;
	while(*s)
	{
		if (*s == c)
		{
			while (*s == c)
				s++;
			return (count);
		}
		else
		{
			s++;
			count++;
		}
	}
	return (count);
}

int		static ft_words_count(char const *s, char c)
{
	int count;

	count = 0;
	while(*s)
	{
		if (*s == c)
		{
			while (*s == c)
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
	int words;
	int count;
	int ind;
	int word_size;
	char **mass;

	ind = 0;
	count = ft_words_count(s, c);
	mass = (char *)malloc(sizeof(char *) * count + 1);
	while (words > 0)
	{
		word_size = ft_char_count(s, c) + 1;
		mass[ind] = (char *)malloc(sizeof(char) * word_size);
		if (mass[ind] == NULL)
			return (NULL);
		ft_strlcpy(mass[ind], s, word_size);
		s+= word_size;
		ind++;
		words--;
	}
	mass[ind] = NULL;
	return (mass);
}
