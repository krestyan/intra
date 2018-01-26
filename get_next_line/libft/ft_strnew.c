#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*r;

	r = NULL;
	size = size + 1;
	if ((r = (char*)malloc(sizeof(char) * size)) != NULL)
	{
		r[size] = '\0';
		while (size > 0)
		{
			size--;
			r[size] = '\0';
		}
	}
	return (r);
}