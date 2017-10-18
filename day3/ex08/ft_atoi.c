/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 21:49:48 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/14 18:33:44 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int	output;
	int	sign;

	output = 0;
	sign = 1;
	while (*str == ' ')
	{
		str++;
	}
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str != 0 && *str <= '9' && *str >= '0')
	{
		output = output * 10 + (*str - '0');
		str++;
	}
	return (output * sign);
}

int main()
{
	printf("%i\n", ft_atoi("   +1234asd"));
	printf("%i\n", atoi("   -1234asd"));
}
