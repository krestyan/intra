#include "ft_list.h"

t_list  *ft_list_at(t_list  *begin_list, unsigned int nbr)
{
    int i;

    i = 0;
    while(begin_list && i < nbr)
    {
        i++;
        begin_list = begin_list->next;
    }

    return(begin_list);
}