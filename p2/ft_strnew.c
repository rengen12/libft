#include "libft.h"
//look for another function
char    *ft_strnew(size_t size)
{
    char    *r;
    site_t  i;

    if (!(r = (char *)malloc(sizeof(*r) * (size + 1))))
        return (NULL);
    i = 0;
    while (i <= size)
    {
        r[i] = '\0';
        i++;
    }
    return (r);
}