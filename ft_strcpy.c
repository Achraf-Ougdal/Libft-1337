#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*str;
	char	*dst;

	str = (char *)src;
	dst = dest;
	while (*str)
	{
		*dst = *str;
		dst++;
		str++;
	}
	*dst = '\0';
	return (dest);
}
