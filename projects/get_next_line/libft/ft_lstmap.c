/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 14:28:13 by akrestya          #+#    #+#             */
/*   Updated: 2017/12/11 16:41:20 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*new_current;
	int		first;

	if (lst == NULL)
		return (NULL);
	first = 1;
	while (lst->next != NULL)
	{
		if (first == 1)
		{
			new_list = f(lst);
			new_current = new_list;
			first = 0;
		}
		else
		{
			new_current->next = f(lst);
			new_current = new_current->next;
		}
		lst = lst->next;
	}
	new_current->next = f(lst);
	return (new_list);
}
