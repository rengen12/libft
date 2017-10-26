#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char *cp;

    cp = (char *)s;
    while (*++s)
        ;
    while (cp != s)
    {
        if (*s == c)
            return ((char *) s);
    s--;
    }
    if (*s == c)
        return ((char *)s);
    return (NULL);
}