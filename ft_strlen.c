#include "libft.h"

size_t	ft_strlen(const char *s)
{
	char	*str;
	size_t	len;

	len = 0;
	str = (char *)s;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
