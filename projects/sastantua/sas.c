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

void print_base(int height, int width, int door)
{
    int i;
    int j;

    i = 0;
    while (i < height)
    {
        j = 0;
        while (j < height - 1 - i)
        {
            ft_putchar(' ');
            j++;
        }
        ft_putchar('/');
        j++;
        while (j < width - height + i)
        {
            while (j >= width / 2 - door / 2 &&
                    j <= width / 2 + door / 2 &&
                    i > height - 1 - (door + 1))
            {
                if (i == height - 1 - door / 2 &&
                    j == width / 2 + door / 2 - 1 &&
                    height > 6)
                    ft_putchar('$');
                else
                    ft_putchar('|');
                j++;
            }
            ft_putchar('*');
            j++;
        }
        ft_putchar('\\');
        ft_putchar('\n');
        i++;
    }
}

void print_level(int height, int width, int space)
{
    int i;
    int j;

    i = 0;
    while (i < height)
    {
        j = 0;
        while (j < space)
        {
            ft_putchar(' ');
            j++;
        }
        j = 0;
        while (j < height - 1 - i)
        {
            ft_putchar(' ');
            j++;
        }
        ft_putchar('/');
        j++;
        while (j < width - height + i)
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
    int s;
    int door;

    height = 3;
    i = 0;
    while (i < size - 1)
    {
        s = (level_width(size - 1) - level_width(i)) / 2;
        print_level(height + i, level_width(i), s);
        i++;
    }
    door = i;
    if (door % 2 == 1)
    {
        door--;
    }
    print_base(height + i, level_width(i), door);
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