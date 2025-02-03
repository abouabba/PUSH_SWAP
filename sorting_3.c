/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 23:14:22 by abouabba          #+#    #+#             */
/*   Updated: 2025/02/03 22:56:49 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorting_3(t_stack **stack_a)
{
    t_stack *first;
    t_stack *second;
    t_stack *third;

    if (!stack_a || !(*stack_a) || !(*stack_a)->next || !(*stack_a)->next->next)
        return (0);

    while (!is_sorted(*stack_a))
    {
        first = *stack_a;
        second = first->next;
        third = second->next;

        if (second->value > first->value && second->value > third->value)
            rra(stack_a);
        else if (first->value > second->value && first->value > third->value)
            ra(stack_a);
        
        first = *stack_a;
        second = first->next;
        if (first->value > second->value)
            sa(stack_a);
    }
    return (0);
}
