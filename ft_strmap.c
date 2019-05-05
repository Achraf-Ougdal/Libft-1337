#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*out;
	size_t	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if(!(out = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	while (i < ft_strlen(s))
	{
		out[i] = f(s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}
