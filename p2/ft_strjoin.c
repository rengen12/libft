#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char            *r;
    unsigned int    i;

    if (!(r = (char *)ft_memalloc(ft_strlen(s1) + ft_strlen(s2))))
        return (NULL);
    i = 0;
    while (*s1)
        r[i++] = *s1++;
    while (*s2)
        r[i++] = *s2++;
    r[i] = '\0';
    return (r);
}