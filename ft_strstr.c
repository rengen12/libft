#include "libft.h"

char    *ft_strstr(const char *haystack, const char *needle)
{
    int     i;
    char    *cp;

    if (!*needle)
        return ((char *)haystack);
    while (*haystack)
    {
        i = 0;
        cp = (char *)haystack;
        while (*cp++ == needle[i] && needle[i])
            i++;
        if (!needle[i])
            return ((char *)haystack);
        haystack++;
    }
    return (NULL);
}