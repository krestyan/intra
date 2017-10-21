/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 15:00:23 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/19 22:56:04 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(int argc, char **argv)
{
	int i;
	int j;
	int size;

	size = 0;
	j = argc;
	while (j > 1)
	{
		i = 0;
		while (argv[j - 1][i])
		{
			size++;
			i++;
		}
		size++;
		j--;
	}
	return (size);
}

char		*ft_strcpy(char *dest, char **src, int size)
{
	int		i;
	int		j;
	int		n;

	i = 0;
	j = 0;
	n = 1;
	while (i < size)
	{
		if (src[n][j] == '\0')
		{
			dest[i] = '\n';
			i++;
			n++;
			j = 0;
		}
		else
		{
			dest[i] = src[n][j];
			j++;
			i++;
		}
	}
	dest[i] = 0;
	return (dest);
}

char		*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		size;

	size = ft_strlen(argc, argv);
	str = (char*)malloc((size + 1) * sizeof(char));
	if (!str)
		return (0);
	str = ft_strcpy(str, argv, size);
	return (str);
}
