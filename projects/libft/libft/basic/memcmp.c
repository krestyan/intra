#include "../includes/libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const uint8_t* str1;
    const uint8_t* str2;
    size_t i;

    str1 = (const uint8_t*)s1;
    str2 = (const uint8_t*)s2;

    i = 0;
    while(i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        else
            i++;
    }
    return (0);
}
