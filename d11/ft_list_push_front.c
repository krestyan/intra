#include "ft_list.h"

t_list *ft_create_elem(void *data);

void    ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *new_elem;
    t_list *temp;

    new_elem = ft_create_elem(data);


    if(*begin_list)
    {
        temp = *begin_list;
        *begin_list = new_elem;
        new_elem->next = temp;
    }
    else
        *begin_list = new_elem;
}