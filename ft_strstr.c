#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*src;
	char	*find;
	size_t	i;

	src = (char *)haystack;
	find = (char *)needle;
	while (*src)
	{
		if (*src == *find)
		{
			i = 0;
			while (*(src + i) && *(find + i) && *(src + i) == *(find + i))
			{
				i++;
			}
			if (!(*(find + i)))
				return (src);
		}
		src++;
	}
	return (NULL);
}
