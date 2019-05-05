#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	len;
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = dest;
	s2 = (char *)src;
	len = ft_strlen(dest) - 1;
	i = 0;
	while (s2[i])
	{
		s1[len++] = s2[i++];
	}
	s1[len] = '\0';
	return (dest);
}
