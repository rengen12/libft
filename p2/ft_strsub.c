#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *r;

    if(!(r = ft_strnew(len)))
        return (NULL);
    while (len--)
        r[i++] = s[start++];
    r[i] = '\0';
    return (r);
}