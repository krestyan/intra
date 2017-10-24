#ifndef NODE_H
# define NODE_H

typedef struct  s_list
{
    struct s_list   *next;
    void            *data;
}               t_list;
#endif