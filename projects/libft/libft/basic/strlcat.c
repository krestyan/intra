#include "../includes/libft.h"

size_t    ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t total_size;
    size_t dest_size;

    total_size = 0;
    dest_size = 0;
    if (size == 0)
        return (ft_strlen(src));
    while (dest[total_size] != '\0' && total_size < size)
        ++total_size;
    dest_size = total_size;
    while (src[total_size - dest_size] != '\0' && total_size < size - 1)
    {
        dest[total_size] = src[total_size - dest_size];
        total_size++;
    }
    if (dest_size < size)
        dest[total_size] = '\0';
    return (dest_size + ft_strlen(src));
}