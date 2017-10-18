/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 19:55:38 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/18 22:37:31 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	if (!argc)
		return (1);
	while (*argv[0])
	{
		ft_putchar(*argv[0]);
		argv[0]++;
	}
	return (0);
}
