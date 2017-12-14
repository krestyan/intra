#include "../includes/libft.h"

void    ft_putendl(char const *s)
{
    int i;
    char n;


    i = 0;
    n = '\n';
    while(s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
    write(1, &n, 1);
}