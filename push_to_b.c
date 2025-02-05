/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:25:55 by abouabba          #+#    #+#             */
/*   Updated: 2025/02/05 22:26:31 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b(t_stack **stack_a, t_stack **stack_b)
{
	int		index;
	int		range;
	t_stack	*head;

	index = 0;
	range = 11;
	while (*stack_a)
	{
		head = *stack_a;
		if (head->index <= index)
		{
			pb(stack_a, stack_b);
			index++;
		}
		else if (head->index <= (index + range))
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			index++;
		}
		else
			ra(stack_a);
	}
}
