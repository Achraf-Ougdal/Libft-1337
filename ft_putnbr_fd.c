#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	man;

	man = n;
	if (man < 0)
	{
		man *= -1;
		ft_putchar_fd('-', fd);
	}
	if (man < 10)
		ft_putchar_fd(man + '0', fd);
	if (man >= 10)
	{
		ft_putnbr_fd(man / 10, fd);
		ft_putchar_fd((man % 10) + '0', fd);
	}
}
