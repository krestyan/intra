#include "../includes/libft.h"

void    ft_putendl_fd(char const *s, int fd)
{
    int i;
    char n;

    n = '\n';
    i = 0;
    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(fd, &n , 1);
}