/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 14:20:15 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/12 16:13:12 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int	s;
	int	z;
	int	u;

	s = -1;
	while (s++ < 9)
	{
		z = s;
		while (z++ < 9)
		{
			u = z;
			while (u++ < 9)
			{
				ft_putchar(48 + s);
				ft_putchar(48 + z);
				ft_putchar(48 + u);
				if (s != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
