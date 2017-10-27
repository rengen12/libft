#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char      *cr;

    if (n == 0 || dest == src)
        return (dest);
    cr = (char *)dest;
    while (n--)
        *cr++ = *((char *)src++);
    return (dest);
}