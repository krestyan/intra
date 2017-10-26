#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
    {
        if (*str > 32 && *str < 127)
            ft_putchar(*str);
        str++;
    }
}

void last_word(char *str)
{
    char *last;

    last = str;
    while (*str)
    {
        if ((*str < 33 || *str == 127) && (*(str + 1) > 32 && *(str + 1) < 127))
            last = str + 1;
        str++;
    }
    if (last)
        ft_putstr(last);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        last_word(av[1]);
    }
    ft_putchar('\n');
    return (0);
}