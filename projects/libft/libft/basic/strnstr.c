#include "../includes/libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int        found;
    int        temp_len;

    if (*needle == '\0')
        return ((char *)haystack);
    while (*haystack != '\0' && len > 0)
    {
        if (*haystack == *needle)
        {
            found = 1;
            temp_len = len;
            while (haystack[found] == needle[found] && temp_len > 0
                    && haystack[found] != '\0' && needle[found] != '\0')
            {
                ++found;
                --temp_len;
            }
            if (needle[found] == '\0')
                return ((char *)haystack);
        }
        ++haystack;
        --len;
    }
    return (NULL);
}
