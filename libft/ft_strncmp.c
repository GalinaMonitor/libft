int	ft_strcmp(int n, char *first, char *second)
{
	int count;

	count = 0;
	while ((*first || *second) && n >0)
	{
		if (*first == *second)
		{
			first++;
			second++;
			n-=1;
		}
		else
		{
			count = *first - *second;
			return(count);
		}
	}
	return 0;
}
