/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/14 00:42:39 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/14 15:33:00 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int output;

	if (nb < 0 || nb > 12)
		return (0);
	output = 1;
	while (nb)
	{
		output *= nb;
		nb--;
	}
	return (output);
}
