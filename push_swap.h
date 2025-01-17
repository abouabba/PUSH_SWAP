#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_node {
    int value;
    struct s_node *next;
} t_node;

typedef struct s_stack {
    t_node *top;
    int size;
} t_stack;


#endif