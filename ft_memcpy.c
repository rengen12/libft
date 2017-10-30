#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char      *cr;

    if (dest == src)
        return (dest);
    cr = (unsigned char *)dest;
    while (n--)
        *cr++ = *((const unsigned char *)src++);
    return (dest);
}