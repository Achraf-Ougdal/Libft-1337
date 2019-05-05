#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char		*out;
	unsigned int	start;
	unsigned int	end;

	start = 0;
	end = ft_strlen(s) - 1;
	if (!*s)
		return (NULL);
	while (s[start] 
			&& (s[start] == ' ' || s[start] == '\n' || s[start] == '\t'))
	{
		start++;
	}
	while (end >= start
			&& (s[end] == ' ' || s[end] == '\n' || s[end] == '\t'))
	{
		end--;
	}
	out = ft_strsub(s, start, (end - start + 1));
	return (out);
}
