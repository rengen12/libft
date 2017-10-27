#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
{
    char            *r;
    unsigned int     i;

    r = NULL;
    if (s && f)
    {
        if (!(r = (char *)ft_memalloc(ft_strlen(s))))
            return (NULL);
        ft_strcpy(r, s);
        i = 0;
        while (r[i])
        {
            r[i] = f(r[i]);
            i++;
        }
    }
    return (r);
}