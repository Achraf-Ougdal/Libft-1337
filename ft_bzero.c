#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char		*out;

	i = 0;
	out = (unsigned char *)str;
	while (i < n)
	{
		out[i] = 0;
		i++;
	}
}
