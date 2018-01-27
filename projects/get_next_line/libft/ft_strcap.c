/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 15:56:06 by akrestya          #+#    #+#             */
/*   Updated: 2017/12/15 15:56:10 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strcap(char *str)
{
	str = ft_strtolower(str);
	str[0] = ft_toupper(str[0]);
	return (str);
}
