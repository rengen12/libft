#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *cp;

    cp = (unsigned char *)s;
    while (n--)
    {
        if (*cp == (unsigned char)c)
            return (cp);
        cp++;
    }
    return (NULL);
}