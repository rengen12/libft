
#include "libft.h"

char	*ft_strdup(const char *s)
{
    char	*r;
    int		i;

    i = 0;
    if (!(r = (char *)malloc(sizeof(*r) * (ft_strlen(s) + 1))))
        return (NULL);
    while (src[i])
    {
        r[i] = s[i];
        i++;
    }
    r[i] = '\0';
    return (r);
}