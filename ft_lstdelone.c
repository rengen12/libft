#include "libft.h"

void    ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
    t_list *t;

    if (alst && del)
    {
        t = *alst;
        del(t->content, t->content_size);
        free(t);
        *alst = NULL;
    }
}