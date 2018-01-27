/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 12:33:37 by akrestya          #+#    #+#             */
/*   Updated: 2017/12/08 13:54:28 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*r;

	r = NULL;
	size = size + 1;
	if ((r = (char*)malloc(sizeof(char) * size)) != NULL)
	{
		r[size] = '\0';
		while (size > 0)
		{
			size--;
			r[size] = '\0';
		}
	}
	return (r);
}
