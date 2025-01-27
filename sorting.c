/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 19:55:32 by abouabba          #+#    #+#             */
/*   Updated: 2025/01/27 22:11:05 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_3(t_stack **stack_a)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	first = *stack_a;
	second = (*stack_a)->next;
	third = (*stack_a)->next->next;

	if (first->value < second->value && second->value < third->value)
		return (0);
	if (first->value < third->value && third->value < second->value)
	{
		sa(stack_a);
		return (0);
	}
	if (second->value < first->value && first->value < third->value)
	{
		sa(stack_a);
		ra(stack_a);
		return (0);
	}
	if (second->value < third->value && third->value < first->value)
	{
		rra(stack_a);
		return (0);
	}
	if (third->value < first->value && first->value < second->value)
	{
		ra(stack_a);
		return (0);
	}
	if (first->value > second->value && second->value > third->value)
	{
		sa(stack_a);
		rra(stack_a);
		return (0);
	}
	return (-1);
}