#include "../includes/libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *s3;

    s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if(s3 == NULL)
        return (NULL);
    else if (s3)
    {
        ft_strcpy((char *)s3, (char *)s1);
        ft_strcat(s3, (char const *)s2);
    }
    return (s3);
}