#include "libft.h"

void	*ft_memalloc(size_t nmb)
{
	void *mem;
	if (mem = malloc(nmb))
		ft_bzero(mem, nmb);
	return (mem);
}
