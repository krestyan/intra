#include "ft_list.h"
#include <stdio.h>


int main(int ac, char **av)
{
    t_list *list;
    t_list *crawl;
    char **n;

    list = NULL;
    list = ft_list_push_params(ac, av);


    /*######################
     * print list's elements
     * #####################*/
    crawl = list;
    if (crawl)
    {
        n = crawl->data;
        while (crawl)
        {
            n = crawl->data;
            printf("%s\n", *n);
            crawl = crawl->next;
        }
    }

    //  ############### //
    //  print list size //
    //  ############### //
    printf("List size: %d\n", ft_list_size(list));

    /*###########################
     * print last element's data
     * ##########################*/
    crawl = ft_list_last(list);
    if (crawl)
    {
        n = crawl->data;
        printf("List last: %s\n", *n);
    }



    unsigned int o = 1;
    crawl = ft_list_at(list, o);
    if (crawl)
    {
        n = crawl->data;
        printf("2nd element is: %s\n", *n);
    }


    ft_list_foreach(list, &ft_check_data);



    ft_list_reverse(&list);
    if (list)
        printf("Reversing...\n");

    crawl = list;
    //n = crawl->data;
    while (crawl)
    {
        n = crawl->data;
        printf("%s\n", *n);
        crawl = crawl->next;
    }

    ft_list_clear(&list);

    return (0);
}