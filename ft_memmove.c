#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*dst;
	char	*src;
	size_t	len;

	src = (char *)str2;
	dst = (char *)str1;
	len = n;
	if (str1 < str2)
		ft_memcpy(dst, src, n);
	else
		while (len--)
			*(dst + len) = *(src + len);
	return (dst);
}
