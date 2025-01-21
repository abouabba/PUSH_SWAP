/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:38:25 by abouabba          #+#    #+#             */
/*   Updated: 2025/01/20 19:12:01 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*second;
	t_stack	*last;

	last = *stack;
	tmp = *stack;
	second = (*stack)->next;
	while(last->next)
	{
		last = last->next;
	}
	last->next = tmp;
	*stack = second;
	tmp->next = NULL;
}

void	ra(t_stack **stack_a)
{
	if (stack_size(*stack_a) <= 1)
		return ;
	rotate(stack_a);
	write (1, "ra\n", 3);
}

void	rb(t_stack **stack_b)
{
	if (stack_size(*stack_b) <= 1)
		return ;
	rotate(stack_b);
	write (1, "rb\n", 3);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_size(*stack_a) <= 1 || stack_size(*stack_b) <= 1)
		return ;
	rotate(stack_a);
	rotate(stack_b);
	write (1, "rr\n", 3);
}
