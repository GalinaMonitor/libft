ft_memcpy(void *dest, const void *src, size_t nmb)
{
	while (nmb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nmb--;
	}
	*dest = '\0';
	return (dest);
}
