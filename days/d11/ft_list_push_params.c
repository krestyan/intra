#include "ft_list.h"


t_list      *ft_list_push_params(int ac, char **av)
{
    int index;
    t_list  *output;

    output = 0;
    index = 1;

    while(index < ac)
    {
        ft_list_push_front(&output, &av[index++]);
    }
    return (output);
}