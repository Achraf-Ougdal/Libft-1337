#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*out;

	i = 0;
	len = ft_strlen(s);
	if(!(out = (char *)malloc(sizeof(char) * (len + 1))) 
			|| s == NULL || f == NULL)
		return (NULL);
	while (i < len)
	{
		out[i] = f(i, s[i]);
		i++;
	}
	return (out);
}
