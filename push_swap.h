
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>


typedef	struct	s_stack
{
	int	value;
	int	index;
	struct	s_stack	*next;
}	t_stack;

void		free_arr(char **tmp);
int			is_valid_number(char *tmp);
int			parse_input(int ac, char **av, t_stack **a);
int			has_duplicates(long n, t_stack *a);
int			ft_isdigit(char c);
long		ft_atoi(const char *str);
char		**ft_split(char const *s, char c);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s1);
char		*ft_substr(char const *s, unsigned int start, size_t len);
void		stack_clear(t_stack **head);
t_stack		*new_stack(int n);
int			push_back(t_stack **head, int n);
int			stack_size(t_stack *s);

void		swap(t_stack **stack);
void		push(t_stack **dst, t_stack **src);
void		rotate(t_stack **stack);
void		reverse_rotate(t_stack **stack);

#endif
