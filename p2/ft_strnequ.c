#include "libft.h"

int     ft_strnequ(char const *s1, char const *s2, size_t n)
{
    while (*s1 == *s2 && s1 && s2 && n--)
    {
        if (*s1 == '\0')
            return (1);
        s1++;
        s2++;
    }
    return (0);
}