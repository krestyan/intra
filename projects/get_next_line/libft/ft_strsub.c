/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:27:21 by akrestya          #+#    #+#             */
/*   Updated: 2017/12/08 13:56:25 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;

	r = ft_strnew(len);
	if (s != NULL && r != NULL)
	{
		i = 0;
		while (i < len)
		{
			r[i] = s[start + i];
			i++;
		}
	}
	return (r);
}
