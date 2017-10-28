#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char            *r;
    unsigned int     i;

    r = NULL;
    if (s && f)
    {
        if (!(r = ft_strnew(ft_strlen(s))))
            return (NULL);
        ft_strcpy(r, s);
        i = 0;
        while (r[i])
        {
            r[i] = f(i, r[i]);
            i++;
        }
    }
    return (r);
}