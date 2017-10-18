/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 17:59:14 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/16 18:25:36 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	negative;
	int	output;

	output = 0;
	negative = 0;
	while (*str == '\n' || *str == '\r' ||
			*str == ' ' || *str == '\v' ||
			*str == '\t' || *str == '\f')
		str++;
	if (*str == '-')
		negative = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= 0 && *str <= '9' && *str)
	{
		output = output * 10 + (*str - '0');
		str++;
	}
	if (negative)
		return (-output);
	else
		return (output);
}
