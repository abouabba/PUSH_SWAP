/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:07:21 by abouabba          #+#    #+#             */
/*   Updated: 2025/02/06 11:53:41 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_arr(char **tmp)
{
	int	i;

	i = 0;
	if (!tmp)
		return ;
	while (tmp[i])
	{
		free(tmp[i]);
		i++;
	}
	free(tmp);
}

int	is_valid_number(char *tmp)
{
	int	i;

	i = 0;
	if (tmp[i] == '-' || tmp[i] == '+')
		i++;
	if (tmp[i] == '\0')
		return (0);
	while (tmp[i])
	{
		if (tmp[i] < '0' || tmp[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	has_duplicates(long n, t_stack *a)
{
	while (a)
	{
		if (a->value == n)
			return (1);
		a = a->next;
	}
	return (0);
}

int	err_exit(t_stack **head, char **arr)
{
	stack_clear(head);
	if (arr)
		free_arr(arr);
	write (2, "Error\n", 6);
	exit(1);
}

int	parse_input(int ac, char **av, t_stack **a)
{
	int		i;
	char	**tmp;
	int		j;
	long	n;

	i = 1;
	while (i < ac)
	{
		tmp = ft_split(av[i], ' ');
		if (!tmp || !tmp[0])
			err_exit(a, tmp);
		j = 0;
		while (tmp[j])
		{
			if (!is_valid_number(tmp[j]))
				err_exit(a, tmp);
			n = ft_atoi(tmp[j++]);
			if (n > 2147483647 || n < -2147483648
				|| has_duplicates(n, *a) || !push_back(a, n))
				err_exit(a, tmp);
		}
		free_arr(tmp);
		i++;
	}
	return (0);
}
