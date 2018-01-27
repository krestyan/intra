/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 17:51:19 by akrestya          #+#    #+#             */
/*   Updated: 2017/12/08 10:56:41 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char	*r;
	size_t	i;
	int		is_done;
	size_t	len_little;

	r = NULL;
	if (little[0] == '\0')
		return ((char*)big);
	if (big[0] == '\0')
		return (NULL);
	len_little = ft_strlen(little);
	is_done = 0;
	i = 0;
	while (is_done == 0 && big[i] != '\0')
	{
		if (ft_strncmp(&big[i], little, len_little) == 0)
		{
			is_done = 1;
			r = &((char*)big)[i];
		}
		i++;
	}
	return (r);
}
