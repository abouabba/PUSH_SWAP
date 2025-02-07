/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:29:01 by abouabba          #+#    #+#             */
/*   Updated: 2025/02/06 12:35:38 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_pos(t_stack *stack, t_stack *node)
{
	int	pos;

	pos = 0;
	while (stack)
	{
		if (stack == node)
			return (pos);
		pos++;
		stack = stack->next;
	}
	return (-1);
}

t_stack	*find_max(t_stack *stack_b)
{
	t_stack	*max_node;

	max_node = stack_b;
	while (stack_b)
	{
		if (stack_b->value > max_node->value)
			max_node = stack_b;
		stack_b = stack_b->next;
	}
	return (max_node);
}

void	algo(t_stack **stack_a, t_stack **stack_b)
{
	int		median;
	t_stack	*max_node;

	push_to_b(stack_a, stack_b);
	add_index(*stack_b);
	if (!(*stack_b))
		return ;
	while (*stack_b)
	{
		median = stack_size(*stack_b) / 2;
		max_node = find_max(*stack_b);
		if (stack_pos(*stack_b, max_node) <= median)
		{
			while (*stack_b && *stack_b != max_node)
				rb(stack_b);
		}
		else
		{
			while (*stack_b && *stack_b != max_node)
				rrb(stack_b);
		}
		pa(stack_a, stack_b);
	}
	stack_clear(stack_b);
}
