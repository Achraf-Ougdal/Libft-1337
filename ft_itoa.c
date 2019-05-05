#include "libft.h"

static int	ft_findlen(int n)
{
	int	i;
	int	len;

	i = n;
	len = 0;
	while (i != 0)
	{
		i /= 10;
		len++;
	}
	if (n <=  0)
		return (len + 1);
	return (len);
}

char		*ft_itoa(int n)
{
	char	*out;
	int	len;
	int	man;

	man = n;
	len = ft_findlen(n);
	if(!(out = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	out[len] = '\0';
	len--;
	if (n < 0)
		man *= -1;
	while (len >= 0 && man != 0)
	{
		out[len] = (man % 10) + '0';
		len--;
		man /= 10;
	}
	if (n < 0)
		out[0] = '-';
	return (out);
}
