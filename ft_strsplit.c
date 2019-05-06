#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;
	char		**out;

	i = 0;
	j = 0;
	if (!(out = (char**)malloc(sizeof(char*) * (ft_count_words(s, c) + 1))))
		return (NULL);
	while (j < ft_count_words(s, c) && s[i])
	{
		while (s[i] == c)
		{
			i++;
		}
		len = ft_wordlen(&s[i], c);
		out[j] = (char*)malloc(sizeof(char) * (len + 1));
		out[j] = ft_strsub(s, i, len);
		i += len;
		j++;
	}
	out[j] = 0;
	return (out);
}
