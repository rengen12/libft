#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *r;
    size_t  i;

    if(!(r = ft_strnew(len)))
        return (NULL);
    i = 0;
    while (len--)
        r[i++] = s[start++];
    r[i] = '\0';
    return (r);
}