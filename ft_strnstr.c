#include "libft.h"

char    *strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t     i;
    char        *cp;

    if (!*needle)
        return ((char *)haystack);
    while (*haystack)
    {
        i = 0;
        cp = (char *)haystack;
        while (*cp++ == needle[i] && needle[i] && i < n)
            i++;
        if (i == n)
            return ((char *)haystack);
        haystack++;
    }
    return (NULL);
}