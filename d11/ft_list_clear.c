#include "ft_list.h"
#include <stdlib.h>

void    ft_list_clear(t_list **begin_list)
{
    t_list *temp;
    t_list *crawl;

    crawl = *begin_list;
    if (crawl)
    {
        while(crawl)
        {
            temp = crawl;
            crawl = crawl->next;
            free(temp);
        }
    }
}