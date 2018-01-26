#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*r;
	size_t	i;

	r = (void*)malloc(size);
	if (r != NULL)
	{
		i = 0;
		while (i < size)
		{
			((char*)r)[i] = 0;
			i++;
		}
	}
	return (r);
}