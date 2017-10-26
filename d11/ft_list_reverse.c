#include "ft_list.h"

void ft_list_reverse(t_list **begin_list)
{
    t_list *forward;
    t_list *back;
    t_list *crawl;

    crawl = *begin_list;
    back = 0;
    while (crawl)
    {
        forward = crawl->next;
        crawl->next = back;
        back = crawl;
        crawl = forward;
    }
    *begin_list = back;
}