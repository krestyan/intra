#include "../includes/libft.h"

void *ft_memset(void * ptr, int value, size_t num)
{

	if(!num)
		return ptr;
	unsigned char *d = ptr;
	*d++ = (unsigned char)value;
	num--;
	while(num > 0)
	{
		*d++ = (unsigned char)value;
		num--;
	}
    return ptr;
}
