/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 17:42:10 by akrestya          #+#    #+#             */
/*   Updated: 2017/12/07 17:48:58 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*r;
	int		is_done;
	size_t	i;

	r = NULL;
	is_done = 0;
	i = ft_strlen(s);
	while (is_done == 0)
	{
		if (s[i] == (char)c)
		{
			r = &((char *)s)[i];
			is_done = 1;
		}
		if (i == 0)
			is_done = 1;
		i--;
	}
	return (r);
}
