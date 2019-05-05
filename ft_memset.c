#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*d;
	size_t	i;

	i = 0;
	d = (unsigned char *)str;
	while (i < n)
	{
		*d = (unsigned char)(c);
		d++;
	}
	return (str);
}
