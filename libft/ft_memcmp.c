int memcmp(const void *src, const void *src2, size_t nmb)
{
	while (nmb > 0)
	{
		if (*src != *src2)
			return (1);
		nmb--;
		src++;
		src2;
	}
	return (0);
}
