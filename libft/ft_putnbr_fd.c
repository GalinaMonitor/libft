#include "libft.h"

void ft_putnbr_fd(int nb, int fd)
{
	long	nbr;

	nbr = (long)nb;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((char)(nbr % 10 + 48), fd);
}
