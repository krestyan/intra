/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 15:31:04 by akrestya          #+#    #+#             */
/*   Updated: 2017/12/12 21:20:17 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*r;
	size_t	len;

	len = ft_strlen(s1);
	r = (char*)malloc(sizeof(char) * (len + 1));
	if (r != NULL)
	{
		r[len] = '\0';
		ft_strcpy(r, s1);
	}
	return (r);
}
