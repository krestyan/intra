/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 15:37:28 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/24 16:55:03 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_list_push_back(t_list **begin_list, void *data);

int main(void)
{
    int i;
    t_list *list;

	list = NULL;
    i = 42;
    ft_list_push_back(&list, &i);
	int *j;
	while (list)
	{
		j = list->data;
		printf("%d\n", *j);
		list = list->next;
	}
    return (0);
}
