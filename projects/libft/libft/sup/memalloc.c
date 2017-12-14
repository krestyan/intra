#include "../includes/libft.h"

void    *ft_memalloc(size_t size)
{
    void *mem;

    mem = malloc(size);
    if(mem == NULL)
        return (NULL);
    bzero(mem, size);
    return mem;
}