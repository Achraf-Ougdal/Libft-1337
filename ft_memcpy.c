#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char	*src;
	unsigned char	*dst;
	size_t		i;

	i = 0;
	src = (unsigned char *)str2;
	dst = (unsigned char *)str1;
	while (i < n)
	{
		*dst = (unsigned char)(*src);
		dst++;
		src++;
		i++;
	}
	return (str1);
}
