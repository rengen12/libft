
#include "libft.h"

int     ft_atoi(const char *nptr)
{
    int     i;
    int     r;

    i = 0;
    r = 0;
    while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n')
        i++;
    if (nptr[i] == '+' || nptr[i] == '-')
        if (nptr[i++] == '-')
            sign = -1;
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        r = r * 10 + (nptr[i] - '0');
        i++;
    }
    return (r);
}