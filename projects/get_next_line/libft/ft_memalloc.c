/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 12:15:06 by akrestya          #+#    #+#             */
/*   Updated: 2017/12/12 14:44:48 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*r;
	size_t	i;

	r = (void*)malloc(size);
	if (r != NULL)
	{
		i = 0;
		while (i < size)
		{
			((char*)r)[i] = 0;
			i++;
		}
	}
	return (r);
}
