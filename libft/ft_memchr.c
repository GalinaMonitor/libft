void* memchr(void* src, int c, size_t nmb)
{
	while (nmb > 0)
	{
		if (*src = c)
			return (src);
		src++;
		nmb--;
	}
	return (NULL);
}
