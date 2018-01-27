#include "get_next_line.h"

char    *copybuff(char *str)
{
    char    *out;
    int     i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == '\n')
            break;
        i++;
    }
    out = ft_strnew(i);
    ft_strncpy(out, str, i);
    return (out);
}

int     get_next_line(const int fd, char **line)
{
    /**
     * Returns      1 if line was read
     *              0 if hit EOF
     *             -1 if error occured
     **/

    char            buff[BUFF_SIZE + 1];
    static  char    *mid_buff = "\0";
    int             nbread;

    if(fd < 0 || line == NULL || read(fd, buff, 0) < 0)
        return (-1);

    while(!ft_strchr(mid_buff, '\n'))
    {
        nbread = read(fd, buff, BUFF_SIZE);
        buff[nbread] = '\0';
        mid_buff = ft_strjoin(mid_buff, buff);
        if(nbread < BUFF_SIZE)
            break;
    }
    *line = copybuff(mid_buff);
    mid_buff = ft_strchr(mid_buff, '\n') + 1;
    if(nbread < BUFF_SIZE)
        return (0);
	return (1);
}