/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 10:20:40 by akrestya          #+#    #+#             */
/*   Updated: 2017/12/15 11:58:40 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_little;

	if (little[0] == '\0')
		return ((char*)big);
	if (len == 0)
		return (0);
	len_little = ft_strlen(little);
	i = 0;
	while (big[i] != '\0' && i < len - len_little + 1)
	{
		j = 0;
		while (big[i + j] &&
				i + j < len && little[j] && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return (&((char*)big)[i]);
		i++;
	}
	return (NULL);
}
