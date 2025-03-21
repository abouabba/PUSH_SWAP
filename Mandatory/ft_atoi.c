/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:34:26 by abouabba          #+#    #+#             */
/*   Updated: 2025/02/05 21:34:27 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(const char	*str)
{
	int		i;
	long	n;
	int		a;

	i = 0;
	n = 0;
	a = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			a = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		n = n * 10 + (str[i] - 48);
		if (n * a > 2147483647 || n * a < -2147483648)
			return (2147483648);
		i++;
	}
	return (n * a);
}
