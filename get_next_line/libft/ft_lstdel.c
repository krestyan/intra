/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 14:00:35 by ialexand          #+#    #+#             */
/*   Updated: 2017/12/11 16:25:43 by ialexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;
	t_list	*next;

	current = *alst;
	next = current->next;
	while (current->next != NULL)
	{
		ft_lstdelone(&current, del);
		current = next;
		next = current->next;
	}
	ft_lstdelone(&current, del);
	*alst = NULL;
}
