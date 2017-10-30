#include "libft.h"

void    ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list  *t;
    t_list  *nxt;

    if (alst && del)
    {
        t = *alst;
        while (t)
        {
            nxt = t->next;
            del(t->content, t->content_size);
            free(t);
            t = nxt;
        }
        *alst = NULL;
    }
}