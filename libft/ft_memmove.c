void *memmove( void* dest, const void* src, size_t nmb)
{
	char temp[nmb];
	while (nmb > 0)
	{
		temp[nmb] = *src;
		*dest = temp[nmb];
		dest++;
		src++;
		nmb--;
	}
	*dest = '\0';
	return (dest);
}
