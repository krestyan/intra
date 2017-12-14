#include "../includes/libft.h"

t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
    t_list *next;
    t_list *new;
    t_list **root;
    t_list *crawl;
    
    if(f == NULL || lst == NULL)
        return NULL;
    
    crawl = NULL;
    *root = crawl;
    while(lst)
    {
        next = lst->next;
        new = f(lst);
        if(crawl == NULL)
            crawl = new;
        else
            crawl->next = new;
            crawl = crawl->next;
        lst = next;
    }
}