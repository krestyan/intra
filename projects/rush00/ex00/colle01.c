/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/15 15:03:45 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/15 18:47:29 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	colle(int x, int y)
{
	int	lenght;
	int height;

	height = y + 1;
	while (height-- > 1)
	{
		lenght = x;
		while (lenght)
		{
			if ((height == y && lenght == x) ||
					(height == 1 && lenght == 1 &&
					height != y && lenght != x))
				ft_putchar('/');
			else if ((height == y && lenght == 1) ||
					(height == 1 && lenght == x))
				ft_putchar('\\');
			else if ((height != y && height != 1) &&
					(lenght != x && lenght != 1))
				ft_putchar(' ');
			else
				ft_putchar('*');
			lenght--;
		}
		ft_putchar('\n');
	}
}
