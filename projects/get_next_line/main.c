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
	while(get_next_line(fd, &line) > 0)
	{
		printf("%d (%s)\n", i+ 1, line);
		i++;
	}
	printf("%d (%s)\n", i+ 1, line);

    close(fd);
    return (0);
}