#include "../includes/libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *part;
    unsigned int i;

    i = 0;
    part = malloc(len);
    if ((start + len) <= ft_strlen(s))
	{
        while(i < len)
        {
            part[i] = s[start];
            start++;
            i++;
        }
		return part;
	}
    else
        return NULL;
}
