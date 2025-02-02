/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 05:46:14 by abouabba          #+#    #+#             */
/*   Updated: 2025/02/02 12:29:59 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void index_stack(t_stack *stack)
{
	t_stack	*node;
	int		index;
	t_stack	*smallest;
	
	index = 0;
	while(index < stack_size(stack))
	{
		node = stack;
		smallest = NULL;
		
		while(node)
		{
			if (node->index == -1 && (!smallest || node->value < smallest->value))
				smallest = node;
			node = node->next;
		}
		if (smallest)
			smallest->index = index++;
	}
}
