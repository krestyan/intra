/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 18:12:02 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/23 18:30:18 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	*out;
	int	i;

	out = malloc((length) * sizeof(int));
	out[length] = '\0';
	i = 0;
	while (i < length)
	{
		out[i] = f(tab[i]);
		i++;
	}
	return (out);
}
