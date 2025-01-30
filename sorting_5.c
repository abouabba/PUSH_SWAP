/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 21:24:43 by abouabba          #+#    #+#             */
/*   Updated: 2025/01/30 21:45:39 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min_indeex(t_stack *stack)
{
	int	min;
	int	index;
	int	min_index;

	min = stack->value;
	index = 0;
	min_index = 0;
	while(stack)
	{
		if (stack->value < min)
		{
			min = stack->value;
			min_index = index;
		}
		stack = stack->next;
		index++;
	}
	return (min_index);
}

int sorting_5(t_stack **stack_a, t_stack **stack_b)
{
	int min_index;

	min_index = find_min_indeex(*stack_a);

	if (min_index == 1)
    {
		sa(stack_a);
    }
	else if (min_index == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (min_index == 3)
    {
		rra(stack_a);
        rra(stack_a);    
    }
    else if (min_index == 4)
    {
        rra(stack_a);
    }
	pb(stack_a, stack_b);
    
	sorting_4(stack_a, stack_b);

	pa(stack_a, stack_b);

	return (0);
}