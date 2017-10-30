#include "libft.h"

t_list  *ft_lstnew(void const *content, size_t content_size)
{
    t_list  *n;

    if (!(n = (t_list *)malloc(sizeof(*n))))
        return (NULL);
    if (!content)
    {
        n->content = content;
        n->size = 0;
    }
    else
    {
        if (!(n->content = malloc(sizeof(content))))
            return (NULL);
        ft_memcpy((n->content = content), content, sizeof(content));
        n->content_size = content_size;
    }
    n->next = NULL;
    return (n);
}