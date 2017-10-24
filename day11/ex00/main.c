#include "ft_list.h"
#include <stdio.h>

t_list *ft_create_elem(void *data);

int main(void)
{
    int i;
    t_list *list;

    i = 42;
    list = ft_create_elem(&i);
    int *j = list->data;
    printf("%d\n", *j);
    return (0);
}