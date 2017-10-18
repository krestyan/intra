#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

int main(int argc, char **argv)
{
    if (!argc)
        return (1);
    while (*argv[0])
    {
        ft_putchar(*argv[0]);
        argv[0]++;
    }
    return (0);
}