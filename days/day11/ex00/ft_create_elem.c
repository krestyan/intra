/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 15:39:30 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/24 16:51:14 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list *ft_create_elem(void *data)
{
    t_list  *output;

    output = malloc(sizeof(t_list));
    if (output)
    {
        output->data = data;
        output->next = NULL;
    }
	else
		output = NULL;
    return (output);
}
