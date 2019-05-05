#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
        char    *str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (n + 1));
	while (i < n)
	{
		str[i] = haystack[i];
		i++;
	}
	str[i] = '\0';
	return (ft_strstr((const char *)str, needle));
}
