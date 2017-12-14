#include "../includes/libft.h"

char **init_tab(char const *s, char c)
{
    char **tab;
    int counter;
    int i;

    counter = 0;
    i = 0;
    while(s[i])
    {
        if(s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
            counter++;
        i++;
    }
	tab = (char**)malloc((counter + 1) * sizeof(*tab));
	tab[counter + 1] = 0;
    return (tab);
}

char **init_words(char **tab, const char *s, char c)
{
    int counter;
    int i;
    int j;

    counter = 0;
    j = 0;
    i = 0;
    while(s[i])
    {
        if(s[i] != c && s[i] != 0)
        {
            counter++;
		}
        if((s[i] == c || s[i + 1] == 0) && counter)
        {
			    tab[j] = (char*)malloc((counter + 1) * sizeof(**tab));
			    tab[j][counter] = 0;
          j++;
          counter = 0;
        }
        i++;
    }
    return (tab);
}

char **cpy_tab(char **tab, const char *s, char c)
{
    int i;
    int x;
    int y;
    int write;

    i = -1;
    x = 0;
    y = 0;
    write = 0;
    while(s[++i])
    {
        if(s[i] != c)
        {
            tab[x][y] = s[i];
            write++;
            y++;
        }
        if ((s[i] == c || s[i + 1] == 0) && write)
        {
            write = 0;
            x++;
            y = 0;
        }
    }
    return(tab);
}

char    **ft_strsplit(char const *s, char c)
{
    char **tab;

    tab = init_tab(s, c);
    tab = init_words(tab, s, c);
    cpy_tab(tab, s, c);
    return tab;
}
