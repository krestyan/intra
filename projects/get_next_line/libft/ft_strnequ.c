/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:23:05 by akrestya          #+#    #+#             */
/*   Updated: 2017/12/08 13:55:26 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		r;

	r = 0;
	if (s1 != NULL && s2 != NULL)
	{
		if (ft_strncmp(s1, s2, n) == 0)
			r = 1;
	}
	return (r);
}
