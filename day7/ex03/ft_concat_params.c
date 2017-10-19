#include <stdlib.h>
#include <stdio.h>

char        *ft_concat_params(int argc, char **argv)
{
    char    *str;
    int     size;
    int     i;
    int     j;

    size = 0;
    i = 0;
    j = argc;
    while (j != 0)
    {
        while (argv[j - 1][i])
        {
            size++;
            i++;
        }
        j--;
    }
    str = malloc(size + 1);
    if (!str)
        return (0);
    i = 0;
    j = -1;
    while(size)
    {
        while (*argv[i])
        {
            str[++j] = *argv[i];
            j++;
            argv++;
        }
        
        str[j] = '\n'
        i++;
    }
}

int         main(int argc, char **argv)
{
    printf("%s", ft_concat_params(argc, argv));
}