/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 19:57:59 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/18 20:37:22 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (!argc)
        return (1);
    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            ft_putchar(argv[i][j]);
            j++;
        }
        ft_putchar('\n');
        i++;
    }
    return (0);
}
