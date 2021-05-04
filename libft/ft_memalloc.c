#include "libft.h"

void	*ft_memalloc(size_t nmb)
{
	void	*mem;

	mem = malloc(nmb);
	if (mem == NULL)
	{
		free(mem);
		return (NULL);
	}
	ft_bzero(mem, nmb);
	return (mem);
}
