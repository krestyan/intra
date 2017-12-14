#include "../includes/libft.h"

void *ft_memmove(void *dest, const void *src, size_t num)
{
    unsigned char *d;
    unsigned char *s;
	size_t   i;

	d = (unsigned char*)dest;
	s = (unsigned char*)src;
	i = 0;
	if (dest < src)
	{
		while(i < num)
    	{
        	d[i] = s[i];
			i++;
    	}
	}
	else
	{
		while(num > 0)
		{
			d[num] = s[num];
			num--;
		}
	}
	return dest;
}
