#include "../includes/libft.h"

void    ft_lstdelone(t_list **alst, void (*del)(void , size_t))
{
    t_list *crawl;

    crawl = *alst;
    del(crawl->content, crawl->content_size);
    ft_memdel((void ) & crawl->content);
    ft_memdel((void **)alst);
}