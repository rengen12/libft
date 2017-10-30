#include "libft.h"

t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list *r;
    t_list *t2;
    t_list *t;

    if (!lst || !f)
        return (NULL);
    t2 = f(lst);
    if (r = ft_lstadd(t2->content, t2->content_size))
    {
        t = r;
        lst = lst->next;
        while (lst)
        {
            t2 = f(lst);
            if (!(t->next = ft_lstadd(t2->content, t2->content_size)))
                return (NULL);
            t = t->next;
            lst = lst->next;
        }
    }
    return (r);
}