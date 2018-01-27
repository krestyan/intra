/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 14:23:19 by akrestya          #+#    #+#             */
/*   Updated: 2017/12/18 12:52:32 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdlib.h>
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*current;

	if (lst != NULL)
	{
		current = lst;
		while (current->next != NULL)
		{
			f(current);
			current = current->next;
		}
		f(current);
	}
}
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*tmp;

	if (lst && f)
	{
		tmp = lst;
		while (tmp->next)
		{
			f(tmp);
			tmp = tmp->next;
		}
		f(tmp);
	}
}
