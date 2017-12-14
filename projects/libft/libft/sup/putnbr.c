#include "../includes/libft.h"

void	ft_putnbr(int nb)
{
	long long a;

	a = nb;
	if (a < 0)
	{
		ft_putchar('-');
		a = -(a);
	}
	if (a < 10)
		ft_putchar(a + '0');
	if (a >= 10)
	{
		ft_putnbr(a / 10);
		ft_putchar((a % 10) + '0');
	}
}