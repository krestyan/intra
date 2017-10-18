/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 20:39:31 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/18 21:06:54 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	j;

	j = 0;
	while (--argc)
	{
		j = 0;
		while (argv[argc][j])
		{
			ft_putchar(argv[argc][j]);
			j++;
		}
		ft_putchar('\n');
	}
	return (0);
}
