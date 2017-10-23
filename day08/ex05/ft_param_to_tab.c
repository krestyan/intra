#include <stdlib.h>
#include <stdio.h>

#include "ft_stock_par.h"

char	            **ft_split_whitespaces(char *str);
int                 ft_strlen(char *str);
char                *ft_strcpy(char *str);

struct s_stock_par  *ft_param_to_tab(int ac, char **av)
{
    t_stock_par *output;
    int         i;

    output = malloc((ac + 2) * sizeof(t_stock_par));
    i = 0;
    while (i < ac)
    {
        printf("Initializing output element %d param size...\n", i);
        output[i].size_param = ft_strlen(av[i]);
        printf("Initializing str...\n");
        output[i].str = av[i];
        printf("Initializing copy...\n");
        output[i].copy = ft_strcpy(av[i]);
        printf("Initializing tab...\n");
        output[i].tab = ft_split_whitespaces(av[i]);
        i++;
    }
    printf("Array Initialized!\n");
    output[i].str = NULL;
    return (output);
}

char                *ft_strcpy(char *str)
{
    char    *cpy;
    int     i;

    cpy = (char*)malloc((ft_strlen(str) + 1) * sizeof(char));
    i = 0;
    while (str[i])
    {
        cpy[i] = str[i];
        i++;
    }
    cpy[i] = '\0';
    return (cpy);
}