/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/14 17:27:32 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/14 18:11:36 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	output;

	output = 1;
	if (power < 0)
		return (0);
	while (power)
	{
		output *= nb;
		power--;
	}
	return (output);
}
