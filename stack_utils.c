/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:38:26 by abouabba          #+#    #+#             */
/*   Updated: 2025/02/05 22:38:27 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_stack *s)
{
	int	i;

	i = 0;
	while (s)
	{
		i++;
		s = s->next;
	}
	return (i);
}

void	stack_clear(t_stack **head)
{
	t_stack	*cur;
	t_stack	*nxt;

	cur = *head;
	while (cur)
	{
		nxt = cur->next;
		free(cur);
		cur = nxt;
	}
	*head = NULL;
}

t_stack	*new_stack(int n)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = n;
	new->index = -1;
	new->next = NULL;
	return (new);
}

int	push_back(t_stack **head, int n)
{
	t_stack	*new;
	t_stack	*tmp;

	new = new_stack(n);
	if (!new)
		return (0);
	if (!*head)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp && tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (1);
}
