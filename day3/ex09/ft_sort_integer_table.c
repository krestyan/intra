/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 23:14:16 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/14 00:10:35 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	temp;
	int	cursor;
	int	swap;

	swap = 1;
	while (swap)
	{
		swap = 0;
		cursor = 1;
		while (cursor < size)
		{
			if (tab[cursor] < tab[cursor - 1])
			{
				temp = tab[cursor];
				tab[cursor] = tab[cursor - 1];
				tab[cursor - 1] = temp;
				swap++;
			}
			cursor++;
		}
	}
}
