#include "libft.h"

void	ft_putnbr(int n)
{
	int	man;

	man = n;
	if (man < 0)
	{
		man *= -1;
		ft_putchar('-');
	}
	if (man < 10)
		ft_putchar(man + '0');
	if (man >= 10)
	{
		ft_putnbr(man / 10);
		ft_putchar((man % 10) + '0');
	}
}
