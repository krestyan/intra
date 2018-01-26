#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	r;
	size_t	i;

	r = 0;
	i = 0;
	while (s[i] != '\0')
	{
		r++;
		i++;
	}
	return (r);
}