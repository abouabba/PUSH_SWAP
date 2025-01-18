#include "push_swap.h"

// is_valid_number: // Check if a string is a valid integer // bach ntakd bli string fih ghir integers
// has_duplicates: // Check for duplicate numbers // bach nchof wach kin chi integer m3awd 2 marat
// parse_input: // Convert arguments into a stack structure // ghadi n7wl dok lar9am lwahd stack structure
void free_arr(char **tmp)
{
    int i = 0;
    if(!tmp)
        return;
    while(tmp[i])
    {
        free(tmp[i]);
        i++;
    }
    free(tmp);
}

int is_valid_number(char *tmp)
{
    int i = 0;

    if (tmp[i] == '-' || tmp[i] == '+')
        i++;
    if (tmp[i] == '\0')
        return (0);
    while(tmp[i])
    {
        if (tmp[i] < '0' || tmp[i] > '9')
            return(0);
        i++;
    }
    return(1);

}

int has_duplicates(long n, t_stack *a)
{
    while(a)
    {
        if(a->value == n)
            return(1);
        a = a->next;
    }
    return (0);

}
int parse_input(int ac, char **av, t_stack **a)
{
    int     i;
    char    **tmp;
    int     j;

    i = 1;
    while (i < ac)
    {
        tmp = ft_split(av[i], ' ');
        if(!tmp)
            return(1);
        if (tmp[0] == NULL)
        {
            free_arr(tmp);
            write(1, "error\n", 6);
            exit(1);
        }
        j = 0;
        while (tmp[j])
        {
            if (!is_valid_number(tmp[j]))
            {
                free_arr(tmp);
                write(1, "error\n", 6);
                exit(1);
            }
            long n = ft_atoi(tmp[j]);
            if (n == 2147483648)
            {
                free_arr(tmp);
                write(1, "error\n", 6);
                exit(1);
            }
            if (has_duplicates(n, *a))
            {
                free_arr(tmp);
                write(1, "error\n", 6);
                exit(1);
            }
            push_back(a, n);
            j++;
        }
        free_arr(tmp);
        i++;
    }
    return(0);
}
