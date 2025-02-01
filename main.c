
#include "push_swap.h"
#include "stdio.h"

void	print_stack(t_stack *s)
{
	if (!s)
		printf("EMPTY\n");
	while (s)
	{
		printf("-> %d\n", s->value);
		s = s->next;
	}
}

int is_sorted(t_stack *stack)
{
	t_stack *current = stack;

	while (current && current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

int main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if(ac > 2)
	{
		parse_input(ac, av, &stack_a);
		if (is_sorted(stack_a))
			exit(0);
		if (ac == 3)
			sa(&stack_a);
		if (ac == 4)
			sorting_3(&stack_a);
		else if (ac == 5)
			sorting_4(&stack_a, &stack_b);
		else if (ac == 6)
			sorting_5(&stack_a, &stack_b);
		print_stack(stack_a);
		print_stack(stack_b);
	}
}
