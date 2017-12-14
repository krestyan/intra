#include "../includes/libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	size_t i;
	unsigned char	*dst;
	unsigned char	*sourc;
	unsigned char cc;

	cc = (unsigned char)c;
	i = 0;
	dst = (unsigned char *)dest;
	sourc = (unsigned char *)src;
	while(i < len && (i == 0 || sourc[i - 1] != cc))
	{
		dst[i] = (unsigned char)sourc[i];
		i++;
	}
	if(i > 0 && sourc[i - 1] == cc)
		return dest + i;
	else
		return NULL;
}
