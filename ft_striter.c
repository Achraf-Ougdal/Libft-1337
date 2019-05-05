#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (f == NULL || s == NULL)
		return ;
	while (*s)
	{
		f(s);
		s++;
	}
}
