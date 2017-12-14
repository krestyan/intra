#include "../includes/libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *,size_t))
{
    t_list *crawl;
    t_list *next;
    
    crawl = *alst;
    while(crawl)
    {
        next = alst->next;
        ft_lstdelone(crawl, del);
        crawl = next;
    }
}

/*
void    ft_lstdel(t_list *alst, void (del)(void *, size_t))
{
    t_list    next;

    while (alst)
    {
        next = (*alst)->next;
        ft_lstdelone(alst, del);
        *alst = next;
    }
}
*/