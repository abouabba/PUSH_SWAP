/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 21:47:51 by abouabba          #+#    #+#             */
/*   Updated: 2025/02/08 00:55:39 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	is_sorted(t_stack *stack)
{
	t_stack	*current;

	current = stack;
	while (current && current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

void	execute_moves(t_stack **stack_a, t_stack **stack_b)
{
	char	*line;

	while ((line = get_next_line(0)))
	{
		if (!apply_move(stack_a, stack_b, line))
		{
			free(line);
			write (1, "Error\n", 6);
			exit(1);
		}
		free(line);
	}
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac >= 2)
	{
		parse_input(ac, av, &stack_a);
		execute_moves(&stack_a, &stack_b);
		if (is_sorted(stack_a) && (stack_b = NULL))
			write (1, "OK\n", 3);
		else
			write (1, "KO\n", 3);
	}
	stack_clear(&stack_a);
	stack_clear(&stack_b);
	return (0);
}