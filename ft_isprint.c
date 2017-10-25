
#include "libft.h"

int     ft_isprint(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    if (c >= 'a' && c <= 'z')
        return (2);
    if (c >= '0' && c <= '9')
        return (4);
    if (c == ' ')
        return (64);
    if ((c >= '!' && c <= '/') || (c >= ':' && c <= '@') || \
            (c >= '[' && c <= '`') || (c >= '{' && c <= '~'))
        return (16);
    return (0);
}