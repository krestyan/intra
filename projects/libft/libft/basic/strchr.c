#include "../includes/libft.h"

char    *ft_strchr(const char *s, int c)
{
    if (c == '\0')
    {
        while (*s != '\0')
            ++s;
        return ((char *)s);
    }
    while (*s != '\0')
    {
        if (*s == (char)c)
            return ((char *)s);
        ++s;
    }
    return (NULL);
}