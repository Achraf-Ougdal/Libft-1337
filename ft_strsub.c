#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	i;

	i = 0;
	if(!(out = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))) 
			|| s == NULL)
		return (NULL);
	while (len - i)
	{
		out[i] = s[start + i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
