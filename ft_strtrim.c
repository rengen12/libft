#include "libft.h"

char    *ft_strtrim(char const *s)
{
    char    *send;

    if (!s)
        return (NULL);
    while (*s == ' ' || *s == '\n' || *s == '\t')
        s++;
    if (!*s)
        return (ft_strnew(0));
    send = s + ft_strlen(s) - 1;
    while (*send == ' ' || *send == '\n' || *send == '\t')
        send--;
    return (ft_strsub(s, 0, send - s + 1));
}