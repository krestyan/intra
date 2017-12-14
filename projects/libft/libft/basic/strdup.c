#include "../includes/libft.h"

char	*ft_strdup(char *src)
{
	char	*copy;
	int		count;
	int		i;

	i = 0;
	count = ft_strlen(src);
	copy = (char*)malloc(sizeof(*copy) * (count + 1));
	if(!copy)
		return (NULL);
	while (i < count)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
