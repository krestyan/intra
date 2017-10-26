/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 16:30:57 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/16 16:39:11 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_check_data(void *data)
{
	char	**str;
	int i =0;

	str = data;
	int length = strlen(*str);
	if (length > 2)
		printf("Long\n");
	else
		printf("Short\n");
}
