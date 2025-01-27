
#include "push_swap.h"

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

int main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if(ac > 2)
	{
		parse_input(ac, av, &stack_a);
		print_stack(stack_a);
		print_stack(stack_b);
		// swap(&stack_a);
		push(&stack_b, &stack_a);
		// reverse_rotate(&stack_a);
		print_stack(stack_a);
		print_stack(stack_b);
		// print_stack(stack_a);
		// print_stack(stack_b);
		push(&stack_b, &stack_a);
		// print_stack(stack_a);
		// print_stack(stack_b);
		// swap(&stack_a);
		// print_stack(stack_a);
	}
}
