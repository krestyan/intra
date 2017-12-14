#include "../includes/libft.h"

char    *ft_strnew(size_t size)
{
    char *output;
    if(size)
    {
        output = malloc(size);
        while(size)
        {
            output[size] = 0;
            size--;
        }
        return (output);
    }
    return NULL;
}