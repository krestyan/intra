#include "../includes/libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
    unsigned int i;
    char *r;
    size_t len;
    
    i = 0;
    len = ft_strlen(s);
    r = malloc(len);
    while (i < len)
    {
        r[i] = f(s[i]);
        i++;
    }
    return (r);
}
