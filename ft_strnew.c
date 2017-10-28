#include "libft.h"

char    *ft_strnew(size_t size)
{
    char    *r;
    size_t  i;

    if (!(r = (char *)malloc(sizeof(*r) * (size + 1))))
        return (NULL);
    return (ft_memset(r, 0, size + 1));
}