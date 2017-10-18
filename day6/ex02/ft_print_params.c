#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (!argc)
        return (1);
    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            ft_putchar(argv[i][j]);
            j++;
        }
        ft_putchar('\n');
        i++;
    }
    return (0);
}