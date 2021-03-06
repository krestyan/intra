/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 17:05:12 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/17 17:32:00 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (*str < 'A' || *str > 'z' || (*str < 'a' && *str > 'Z'))
			return (0);
		str++;
	}
	return (1);
}
