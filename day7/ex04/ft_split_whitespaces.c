/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 18:22:09 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/21 17:26:27 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**cpystr(char *src, char **dest)
{
	int	i;
	int	j;

	i = 0;
	while (*src)
	{
		j = 0;
		while (*src != ' ' && *src != '\t' && *src != '\n')
		{
			dest[i][j] = *src;
			src++;
			j++;
		}
		if (j)
			i++;
		src++;
	}
	return (dest);
}

char	**mkstr(char *str, int counter)
{
	char	**arr;
	int		c;
	int		n;

	arr = (char**)malloc((counter + 1) * sizeof(char*));
	n = 0;
	while (*str)
	{
		c = 0;
		while (*str != ' ' && *str != '\t' && *str != '\n')
		{
			c++;
			str++;
		}
		if ((*str == ' ' || *str == '\n' || *str == '\t') && c > 0)
		{
			arr[n] = (char*)malloc((c + 1) * sizeof(char));
			n++;
		}
		str++;
	}
	return (arr);
}

int		counter(char *str)
{
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
	return (counter);
}

char	**ft_split_whitespaces(char *str)
{
	int		c;
	char	**out;

	c = counter(str);
	out = mkstr(str, c);
	return (cpystr(str, out));
}
