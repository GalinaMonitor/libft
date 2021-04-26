#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char *str;

	str = ft_itoa(n);
	write(fd, str, ft_strlen(str));
}
