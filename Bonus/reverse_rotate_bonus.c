/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:28:20 by abouabba          #+#    #+#             */
/*   Updated: 2025/02/08 00:40:51 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;
	t_stack	*second_to_last;

	tmp = *stack;
	last = *stack;
	second_to_last = *stack;
	while (last->next)
	{
		second_to_last = last;
		last = last->next;
	}
	second_to_last->next = NULL;
	last->next = tmp;
	*stack = last;
}

void	rra(t_stack **stack_a)
{
	if (stack_size(*stack_a) <= 1)
		return ;
	reverse_rotate(stack_a);
}

void	rrb(t_stack **stack_b)
{
	if (stack_size(*stack_b) <= 1)
		return ;
	reverse_rotate(stack_b);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_size(*stack_a) <= 1 || stack_size(*stack_b) <= 1)
		return ;
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}
