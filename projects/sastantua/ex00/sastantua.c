/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/15 21:36:13 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/15 23:05:37 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(char c);

int g_door;

void		print_door(int *i, int *j, int width, int height)
{
	while (*j < width - height + *i)
	{
		while (*j >= width / 2 - g_door / 2 &&
				*j <= width / 2 + g_door / 2 &&
				*i > height - 1 - (g_door + 1))
		{
			if (*i == height - 1 - g_door / 2 &&
				*j == width / 2 + g_door / 2 - 1 &&
				height > 6)
				ft_putchar('$');
			else
				ft_putchar('|');
			*j = *j + 1;
		}
		ft_putchar('*');
		*j = *j + 1;
	}
}

int			level_width(int level)
{
	if (level == 0)
		return (7);
	return (level_width(level - 1) + 2 * (1 + (3 + level)
				+ ((level % 2) + (level / 2))));
}

void		print_base(int height, int width)
{
	int	i;
	int	j;

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < height - 1 - i)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('/');
		j++;
		print_door(&i, &j, width, height);
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}
}

void		print_level(int height, int width, int space)
{
	int	i;
	int	j;

	i = -1;
	while (++i < height)
	{
		j = -1;
		while (++j < space)
			ft_putchar(' ');
		j = 0;
		while (j < height - 1 - i)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('/');
		j++;
		while (j < width - height + i)
		{
			ft_putchar('*');
			j++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
	}
}

void		sastantua(int size)
{
	int	i;
	int	s;
	int height;

	height = 3;
	i = 0;
	while (i < size - 1)
	{
		s = (level_width(size - 1) - level_width(i)) / 2;
		print_level(height + i, level_width(i), s);
		i++;
	}
	g_door = i;
	if (g_door % 2 == 1)
	{
		g_door--;
	}
	print_base(height + i, level_width(i));
}
