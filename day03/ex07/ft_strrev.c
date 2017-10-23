/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 21:33:30 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/13 21:47:42 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)
{
	int		counter;
	int		half;
	char	temp;
	int		i;

	counter = 0;
	i = 0;
	while (str[counter + 1])
	{
		counter++;
	}
	half = counter / 2;
	while (counter != half)
	{
		temp = str[i];
		str[i] = str[counter];
		str[counter] = temp;
		counter--;
		i++;
	}
	return (str);
}
