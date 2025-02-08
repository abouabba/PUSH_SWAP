/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:38:43 by abouabba          #+#    #+#             */
/*   Updated: 2025/02/08 17:54:56 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
}

void	sb(t_stack **stack_b)
{
	if (stack_size(*stack_b) <= 1)
		return ;
	swap(stack_b);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_size(*stack_a) <= 1 || stack_size(*stack_b) <= 1)
		return ;
	swap(stack_a);
	swap(stack_b);
}
