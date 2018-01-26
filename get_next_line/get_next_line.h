#ifndef GET_H
# define GET_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <stdio.h>

#define string char*
#define BUFF_SIZE 50

int     get_next_line(const int fd, char **line);

#endif