#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	if (len > 0)
	{
		ft_memset(b, 0, len);
	}
}