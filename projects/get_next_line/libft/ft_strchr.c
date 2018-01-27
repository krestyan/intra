/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 17:34:58 by akrestya          #+#    #+#             */
/*   Updated: 2017/12/07 17:41:23 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*r;
	int		is_done;
	size_t	i;

	r = NULL;
	is_done = 0;
	i = 0;
	while (is_done == 0)
	{
		if (s[i] == (char)c)
		{
			r = &((char *)s)[i];
			is_done = 1;
		}
		if (s[i] == '\0')
			is_done = 1;
		i++;
	}
	return (r);
}
