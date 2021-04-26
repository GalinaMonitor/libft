#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char *str;

	str = ft_atoi(n);
	write(fd, str, ft_strlen(str));
}
