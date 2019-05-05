#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == '+' || str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
	{
		i++;
	}
	if (str[i++] == '-')
		sign *= -1;
	while (str[i++])
	{
		res = (res * 10) + (str[i] - '0');
	}
	return (res * sign);
}
