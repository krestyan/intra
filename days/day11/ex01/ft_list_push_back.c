/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 15:37:57 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/24 16:55:05 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data);

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *crawl;
	
	crawl = *begin_list;
	if (*begin_list)
	{
		while (crawl->next != NULL)
			crawl = crawl->next;
		crawl->next = ft_create_elem(&data);
	}
	else
	{
		*begin_list = ft_create_elem(&data);
	}
}
