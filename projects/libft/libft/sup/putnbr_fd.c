#include "../includes/libft.h"

void ft_putnbr_fd(int nb, int fd)
{
	long long a;

	a = nb;
	if (a < 0)
	{
		ft_putchar_fd('-', fd);
		a = -(a);
	}
	if (a < 10)
		ft_putchar_fd(a + '0', fd);
	if (a >= 10)
	{
		ft_putnbr_fd(a / 10, fd);
		ft_putchar_fd((a % 10) + '0', fd);
	}
}