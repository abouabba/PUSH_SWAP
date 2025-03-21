/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:27:43 by abouabba          #+#    #+#             */
/*   Updated: 2025/02/05 22:27:44 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_front(t_stack **head, t_stack *new)
{
	if (!head || !new)
		return ;
	new->next = *head;
	*head = new;
}

void	push(t_stack **dst, t_stack **src)
{
	t_stack	*tmp;

	tmp = *src;
	*src = (*src)->next;
	tmp->next = NULL;
	add_front(dst, tmp);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_size(*stack_a))
		return ;
	push(stack_b, stack_a);
	write (1, "pb\n", 3);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_size(*stack_b))
		return ;
	push(stack_a, stack_b);
	write (1, "pa\n", 3);
}
