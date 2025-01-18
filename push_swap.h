#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


typedef struct s_stack
{
    int value;
    int index;
    struct s_stack *next;
} t_stack;

int parse_input(int ac, char **av, t_stack **a);
int ft_isdigit(char c);
long		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);


#endif