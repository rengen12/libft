#include "libft.h"

static size_t   numlen(int n)
{
    size_t  r;

    r = 1;
    if (n < 0)
        r++;
    while (n /= 10)
        r++;
    return (r);
}

char    *ft_itoa(int n)
{
    char        *r;
    long long   ln;
    size_t      l;

    if (!(r = ft_strnew((l = numlen(n)))))
        return (NULL);
    ln = (long long)n;
    if (ln < 0)
    {
        r[0] = '-';
        ln = -ln;
    }
    r[--l] = (char)(ln % 10 + '0');
    while (ln /= 10)
        r[--l] = (char)(ln % 10 + '0');
    return (r);
}