#include "../includes/libft.h"
/*
typedef struct  s_list
{
    void *content;
    size_t content_size;
    struct s_list *next;
}               t_list;
*/
t_list  *ft_lstnew(void const *content, size_t content_size)
{
    t_list *new;
    if (content == NULL)
        content_size = 0;

    new = malloc(sizeof(t_list));
    if(new)
    {
        new->content = (void*)content;
        new->content_size = content_size;
    }

    return(new);
}