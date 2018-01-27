/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:04:07 by akrestya          #+#    #+#             */
/*   Updated: 2017/12/08 13:12:21 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*r;
	size_t	i;
	size_t	len_s;

	r = NULL;
	if (s != NULL)
	{
		len_s = ft_strlen(s);
		r = ft_strnew(len_s);
		if (r != NULL)
		{
			i = 0;
			while (i < len_s)
			{
				r[i] = f(s[i]);
				i++;
			}
		}
	}
	return (r);
}
