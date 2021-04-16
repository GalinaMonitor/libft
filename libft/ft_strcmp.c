int	ft_strcmp(char *first, char *second)
{
	int count;

	count = 0;
	while (*first || *second)
	{
		if (*first == *second)
		{
			first++;
			second++;
		}
		else
		{
			count = *first - *second;
			return (count);
		}
	}
	return 0;
}
