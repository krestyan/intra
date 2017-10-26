/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 01:02:32 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/19 22:55:23 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int *arr;
	int mincopy;

	mincopy = min;
	if (!*range)
		return (0);
	arr = malloc((max - min + 1) * 4);
	if (*range == 0)
		return (0);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	arr[i] = 0;
	*range = arr;
	return (max - mincopy);
}
