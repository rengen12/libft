#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char    *ptrs1;
    unsigned char    *ptrs2;

    ptrs1 = (unsigned char *)s1;
    ptrs2 = (unsigned char *)s2;
    while (*ptrs1 && *ptrs2 && *ptrs1 == *ptrs2)
    {
        ptrs1++;
        ptrs2++;
    }
    if ((*ptrs1 - *ptrs2) < 0)
        return (-1);
    if ((*ptrs1 - *ptrs2) > 0)
        return (1);
    return (0);
}