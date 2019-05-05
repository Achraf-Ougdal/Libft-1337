#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(out = (char *)malloc(sizeof(char) * (len + 1)))
			|| s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[i])
	{
		out[i] = s1[i];
		i++;
	}
	len = 0;
	while (s2[len])
	{
		out[i] = s2[len];
		i++;
		len++;
	}
	out[i] = '\0';
	return (out);
}
