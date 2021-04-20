ft_memccpy(void *dest, const void *src, int c, size_t nmb)
{
	while (nmb > 0)
	{
		if (*src = c)
			return (NULL);
		*dest = *src;
		dest++;
		src++;
		nmb--;
	}
	*dest = '\0';
	return (dest);
}
