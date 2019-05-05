#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
        char    *s;
	size_t	len;
        
        s = (char *)str;
	len = ft_strlen(s) - 1;
        while (*(s + len))
        {
                if (*(s + len) == c)
                        return (s + len);
                len--;
        }       
        return (NULL);
}       
