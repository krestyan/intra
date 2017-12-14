#include "../includes/libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char *temp = NULL;
    if (c == '\0')
    {
        while (*s != '\0')
            ++s;
        return ((char *)s);
    }
    while (*s != '\0')
    {
        if (*s == (char)c)
            temp = (char *)s;
        ++s;
    }
    return (temp);
}