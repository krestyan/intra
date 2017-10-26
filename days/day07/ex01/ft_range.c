/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 00:34:45 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/19 22:55:08 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *ptr;
	int i;

	if (min >= max)
		return (0);
	ptr = malloc((max - min + 2) * 4);
	if (ptr == 0)
		return (0);
	i = 0;
	while (max >= min)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
