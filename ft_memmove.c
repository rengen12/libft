#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char	t[n];

    ft_memcpy(t, src, n);
    ft_memcpy(dest, t, n);
    return (dest);
}