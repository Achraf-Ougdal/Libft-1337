#include "libft.h"

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	*dst;
	size_t		i;
	

	i = 0;
	src = (unsigned char *)str2;
	dst = (unsigned char *)str1;
	while (i < n)
	{
		dst[i] = (unsigned char)(src[i]);
		if (src[i] == c)
			return (str1);
		i++;
	}
	return (NULL);
}

