#include "libft.h"

char	*strlcat (char *dest, const char *src, size_t size)
{
	size_t len_src;
	size_t len_dest;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	dest = ft_memchr(dest, '\0', size);
	if (dest == NULL)
		return(size + len_src);
	ft_strlcpy(src, dest, size - len_dest);
	return (len_src + len_dest);
}
