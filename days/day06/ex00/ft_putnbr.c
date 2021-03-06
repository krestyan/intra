/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 16:40:44 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/18 22:48:09 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long long a;

	a = nb;
	if (a < 0)
	{
		ft_putchar('-');
		a = -(a);
	}
	if (a < 10)
		ft_putchar(a + '0');
	if (a >= 10)
	{
		ft_putnbr(a / 10);
		ft_putchar((a % 10) + '0');
	}
}
