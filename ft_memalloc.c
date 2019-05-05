#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*out;

	if(!(out = malloc(sizeof(size_t) * (size))))
		return (NULL);
	ft_bzero(out, size);
	return (out);
}
