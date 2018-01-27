#ifndef GET_H
# define GET_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>

#define string char*
#define BUFF_SIZE 50

int     get_next_line(const int fd, char **line);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putstr(char const *s);
void	ft_putchar(char c);
void	ft_putnbr(int n);
size_t	ft_strlen(const char *s);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strnew(size_t size);



#endif