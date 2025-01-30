/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 23:14:22 by abouabba          #+#    #+#             */
/*   Updated: 2025/01/27 23:15:40 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int sorting_3(t_stack **stack_a)
{
    t_stack	*first;
    t_stack	*second;
    t_stack	*third;

    if (!stack_a || !(*stack_a) || !(*stack_a)->next || !(*stack_a)->next->next)
        return (-1);

    first = *stack_a;
    second = (*stack_a)->next;
    third = (*stack_a)->next->next;

	if (first->value < second->value && second->value < third->value)
		return(0);
    if (first->value < third->value && third->value < second->value)
    {
	rra(stack_a);
        sa(stack_a);
        return (0);
    }
    if (second->value < first->value && first->value < third->value)
    {
        sa(stack_a);
        return (0);
    }
    if (second->value < third->value && third->value < first->value)
    {
        ra(stack_a);
        return (0);
    }
    if (third->value < first->value && first->value < second->value)
    {
        rra(stack_a);
        return (0);
    }
    if (first->value > second->value && second->value > third->value)
    {
        sa(stack_a);
        return (0);
    }
    return (-1);
}
