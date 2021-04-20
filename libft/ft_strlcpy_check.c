char	*ft_strcpy(char *start, char *finish)
{
	int count;

	count = 0;
	while (*start)
	{
		*finish = *start;
		finish++;
		start++;
		count++;
	}
	*finish = '\0';
	finish-= count;
	return (finish);
}
