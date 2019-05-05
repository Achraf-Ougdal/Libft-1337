#include "libft.h"

char    *ft_strncpy(char *dest, const char *src, size_t n)
{
        char    *str;
        char    *dst;
	size_t	i;

        str = (char *)src;
        dst = dest;
	i = 0;
        while (*str && i < n)
        {
                *dst = *str;
                dst++;
                str++;
		i++;
        }
        *dst = '\0';
        return (dest);
}
