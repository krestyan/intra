/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 21:07:48 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/18 23:27:51 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			cmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (1);
}

void		swapstr(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void		printparam(char **str)
{
	int		i;
	int		j;

	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			ft_putchar(str[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int			main(int argc, char **argv)
{
	int		cursor;
	int		swap;

	if (!argc)
		return (0);
	swap = 1;
	while (swap)
	{
		swap = 0;
		cursor = 2;
		while (cursor < argc)
		{
			if (cmp(argv[cursor], argv[cursor - 1]) < 0)
			{
				swapstr(&argv[cursor], &argv[cursor - 1]);
				swap++;
			}
			cursor++;
		}
	}
	printparam(&argv[0]);
	return (0);
}
