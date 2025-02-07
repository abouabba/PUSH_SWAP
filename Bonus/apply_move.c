/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 22:08:00 by abouabba          #+#    #+#             */
/*   Updated: 2025/02/08 00:38:35 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	apply_move(t_stack **a, t_stack **b, char *move)
{
	if (!ft_strcmp(move, "sa\n"))
		sa(a);
	else if(!ft_strcmp(move, "sb\n"))
		sb(b);
	else if(!ft_strcmp(move, "ss\n"))
		ss(a, b);
	else if(!ft_strcmp(move, "pa\n"))
		pa(a, b);
	else if(!ft_strcmp(move, "pb\n"))
		pb(a, b);
	else if(!ft_strcmp(move, "ra\n"))
		ra(a);
	else if(!ft_strcmp(move, "rb\n"))
		rb(b);
	else if(!ft_strcmp(move, "rr\n"))
		rr(a, b);
	else if(!ft_strcmp(move, "rra\n"))
		rra(a);
	else if(!ft_strcmp(move, "rrb\n"))
		rrb(b);
	else if(!ft_strcmp(move, "rrr\n"))
		rrr(a, b);
	else
		return (0);
	return (1);
}
