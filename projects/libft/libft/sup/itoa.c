#include "../includes/libft.h"

int     ft_abs(int n)
{
    if(n<0)
        return (-n);
    else
        return (n);
}

int     ft_len(int n)
{
    int len;

    if(n<0)
        len = 1;
    else
        len = 0;
    while(n!=0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    int len;
    char *itoa;
    int sign;

    len = ft_len(n);
    itoa = (char *)malloc(sizeof(char) * len + 1);
    itoa[len] = 0;

    len = len - 1;
    if(n < 0)
        sign = -1;
    else
        sign = 0;
    while(len >= 0)
    {
        itoa[len] = '0' + ft_abs(n % 10);
        n = ft_abs(n / 10);
        len--;
    }
    if (sign == -1)
        itoa[0] = '-';
    return itoa;
}