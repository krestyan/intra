#include <unistd.h>
#include <stdio.h>

int     ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int     level_width(int level)
{
    if (level == 0)
        return 7;
    return level_width(level - 1) + 2 * (1 + (3 + level) + ((level % 2) + (level / 2)));
}

void    print_base(int height, int width)
{
    int i;
    int j;
    int middle;

    i = 0;

    while (i < height)
    {
        j = 0;
        while (j < height - i - 1)
        {
            ft_putchar(' ');
            j++;
        }
        ft_putchar('/');
        j += height - i + 1;
        while (j < width )
        {
            if (j == width / 2)
                ft_putchar('m');
            else
                ft_putchar('*');

            j++;
        }
        ft_putchar('\\');
        ft_putchar('\n');
        i++;
    }
}

void    print_level(int height, int width, int space)
{
    int i;
    int j;

    i = 0;
    while (i < height)
    {
        j = -space;
        while (j < height - i - 1)
        {
            ft_putchar(' ');
            j++;
        }
        ft_putchar('/');
        j += height - i + 1;
        while (j < width )
        {

            ft_putchar('*');
            j++;
        }
        ft_putchar('\\');
        ft_putchar('\n');
        i++;
    }
}


void    sastantua(int size)
{
    int i;
    int height;
    int width;
    int space;

    height = 3;
    i = 0;
    while (i < size - 1)
    {
        space = (level_width(size - 1) - level_width(i)) / 2;
        print_level(height + i, level_width(i), space);
        i++;
    }
    print_base(height + i, level_width(i));

}


int     main(int argc, char **argv)
{
    if(argc != 2)
    {
        printf("Invalid input. Usage: /sastantua [size]\n");
        return 1;
    }

    int i = 0;
    while(argv[1][i])
    {
        if (argv[1][i] < '0' || argv[1][i] > '9')
        {
        printf("Invalid input. Usage: /sastantua [size]\n");
            return 1;
        }
        i++;
    }

    sastantua(atoi(argv[1]));
}