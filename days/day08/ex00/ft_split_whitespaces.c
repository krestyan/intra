/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:22:33 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/22 15:08:20 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define F (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\0')

char	**init_tab(char *str);
char	**init_words(char **tab, char *str);
char	**cpy_tab(char **tab, char *str);

char	**ft_split_whitespaces(char *str)
{
	char	**tab;

	tab = init_tab(str);
	tab = init_words(tab, str);
	cpy_tab(tab, str);
	return (tab);
}

char	**init_tab(char *str)
{
	char	**tab;
	int		counter;
	int		i;

	counter = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] != ' ' && str[i] != '\n' && str[i] != '\t') &&
				(str[i + 1] == ' ' || str[i + 1] == '\0' ||
				str[i + 1] == '\n' || str[i + 1] == '\t'))
			counter++;
		i++;
	}
	tab = (char**)malloc((counter + 1) * sizeof(*tab));
	tab[counter] = 0;
	return (tab);
}

char	**init_words(char **tab, char *str)
{
	int counter;
	int i;
	int j;

	counter = 0;
	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
			counter++;
		if (((str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
					str[i] == '\0')
					|| str[i + 1] == '\0') && counter)
		{
			tab[j] = (char*)malloc((counter + 1) * sizeof(**tab));
			tab[j][counter] = 0;
			j++;
			counter = 0;
		}
		i++;
	}
	return (tab);
}

char	**cpy_tab(char **tab, char *str)
{
	int i;
	int x;
	int y;
	int write;

	i = -1;
	x = 0;
	y = 0;
	write = 0;
	while (str[++i])
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			tab[x][y] = str[i];
			write++;
			y++;
		}
		if ((F || str[i + 1] == '\0') && write)
		{
			write = 0;
			x++;
			y = 0;
		}
	}
	return (tab);
}
