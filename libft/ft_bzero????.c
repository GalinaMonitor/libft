char	*ft_bzero(char *str, char letter)
{
	int count;

	count = 0;
	while(*str == letter)
	{
		*str = '\0';
		str++;
		count++;
	}
	str-= count;
	return(str);
}
