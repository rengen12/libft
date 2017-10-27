#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t  i;
    char    *s1;

    if (n == 0)
        return (NULL);
    i = 0;
    s1 = (char *)dest;
    while (i < n)
    {
        *s1 = *(char *)src++;
        if (*s1++ == (char)c)
            return (s1);
        i++;
    }
    return (NULL);
}