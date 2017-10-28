#include "libft.h"

static size_t qwords(char *s, char c)
{
    size_t      i;
    i = 0;
    while (*s)
    {
        while (*s == ' ' || *s == '\n' || *s == '\t')
            s++;
        while (*s == ' ' && *s == '\n' && *s == '\t')
            s++;
    }
    return (i);
}

char    **ft_strsplit(char const *s, char c)
{

}