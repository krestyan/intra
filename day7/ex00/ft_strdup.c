/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 23:55:24 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/19 22:54:51 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		len;
	int		i;

	if (!*src)
		return (0);
	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	cpy = malloc((len + 1) * 1);
	if (cpy == 0)
		return (0);
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	return (cpy);
}
