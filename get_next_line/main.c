#include "get_next_line.h"

int     main(void)
{
    int     fd;
    string  line;
    int     i;

    fd = open("./file.txt", O_RDONLY);
	if(fd == -1)
		return (-1);
	i = 0;
	while(get_next_line(fd, &line) <= 0 && i < 3)
	{
	    ft_putnbr(i + 1);
	    ft_putstr(". ");
		ft_putstr(line);
		ft_putchar('\n');
		i++;
	}
    close(fd);
    return (0);
}