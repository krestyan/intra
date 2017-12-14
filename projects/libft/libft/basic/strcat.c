#include "../includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*str;

	str = s1;
	while (*s1)
		s1++;
	ft_strcpy(s1, (char *)s2);
	return (str);
}