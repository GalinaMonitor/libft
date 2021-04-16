char	*ft_strcpy(int n, char *start, char *finish)
{
	int count;

	count = 0;
	while (*start && n > 0)
	{
		*finish = *start;
		finish++;
		start++;
		count++;
		n--;
	}
	*finish = '\0';
	finish-= count;
	return (finish);
}
