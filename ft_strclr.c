#include "libft.h"

void	ft_strclr(char *as)
{
	size_t	len;

	len = ft_strlen((const char *)as) - 1;
	while (len > 0)
	{
		as[len] = '\0';
		len--;
	}
	as[len] = '\0';
}
