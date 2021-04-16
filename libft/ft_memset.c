char	*ft_memset(char *str, char letter, int nmb)
{
	int count;

	count = 0;
	while(nmb > 0)
	{
		*str = letter;
		str++;
		nmb--;
		count++;
	}
	str-= count;
	return(str);
}
