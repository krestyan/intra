#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *crawl;

    crawl = begin_list;
    while (crawl)
    {
        f(crawl->data);
        crawl = crawl->next;
    }
}