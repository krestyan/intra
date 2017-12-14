#include "../includes/libft.h"

char *ft_strtrim(char const *s)
{
    char *o;
    char *lastword;
    char *temp;
    int i;

    o = (char *)s;
    while(*o == ' ' || *o == '\n' || *o == '\t')
        o++;
    i = 0;
    while(o[i])
    {
        if ((o[i] > 32 && o[i] != 127) && (o[i + 1] < 33 || o[i + 1] == 127))
            lastword = o + i + 1;
        i++;
    }
    temp = malloc(lastword - o);
    ft_strncpy(temp, o, lastword - o);
    return (temp);
}