#include "libft.h"

char	*ft_strnew(size_t count)
{
	return((char *)ft_memalloc(sizeof(char) * count + 1));
}
