#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*src;
	size_t 	i;

	
	i = 0;
	src = (char *)str;
	while (i < n)
	{
		if (*src == c)
			return ((void *)src);
		i++;
	}
	return (NULL);
}
