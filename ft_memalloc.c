#include "libft.h"

void    *ft_memalloc(size_t size)
{
    void    *r;

    if(!(r = malloc(size + 1)))
        return (NULL);
    ft_bzero(r, size + 1);
    return (r);
}