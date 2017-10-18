/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 01:02:32 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/19 01:31:51 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
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
		//printf("%d\n", arr[i]);
		min++;
		i++;
	}
	arr[i] = 0;
	*range = arr;
	return (max - mincopy);
}

int main()
{
	int *range;
	int sizeOfRange;
	int i = 0;

	sizeOfRange = ft_ultimate_range(&range, 1, 3);
	while (i < 2)
	{
		printf("%d\n", range[i]);
		i++;
	}
	printf("Size of range: %d\n", sizeOfRange);
}
