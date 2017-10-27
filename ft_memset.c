#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char      *cr;

    if (n == 0)
        return (s);
    cr = (unsigned char *)s;
    while (n--)
    {
        *cr = (unsigned char)c;
        if (n)
            cr++;
    }
    return (s);
}