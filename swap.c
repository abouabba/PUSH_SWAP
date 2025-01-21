/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:38:40 by abouabba          #+#    #+#             */
/*   Updated: 2025/01/20 19:14:56 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	sa(t_stack **stack_a)
{
	if (stack_size(*stack_a) <= 1)
		return ;
	swap(stack_a);
	write (1, "sa\n", 3);
}

void	sb(t_stack **stack_b)
{
	if (stack_size(*stack_b) <= 1)
		return ;
	swap(stack_b);
	write (1, "sb\n", 3);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_size(*stack_a) <= 1 || stack_size(*stack_b) <= 1)
		return ;
	swap(stack_a);
	swap(stack_b);
	write (1, "ss\n", 3);
}
