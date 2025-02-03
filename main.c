
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
	if(ac >= 2)
	{
		parse_input(ac, av, &stack_a);
		index_stack(stack_a);
		if (is_sorted(stack_a))
			exit(0);
		if (stack_size(stack_a) == 2)
			sa(&stack_a);
		if (stack_size(stack_a) == 3)
			sorting_3(&stack_a);
		else if (stack_size(stack_a) == 4)
			sorting_4(&stack_a, &stack_b);
		else if (stack_size(stack_a) == 5)
			sorting_5(&stack_a, &stack_b);
		while(stack_a)
		{
			printf("----(%d)--->(%d)--->(%p)\n", stack_a->value, stack_a->index, stack_a->next);
			stack_a = stack_a->next;
		}
		// print_stack(stack_a);
		// print_stack(stack_b);
	}
}
