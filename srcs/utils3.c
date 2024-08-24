/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 01:52:05 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/24 19:19:05 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_node	*tmp;

	if (!stack)
		ft_error();
	tmp = stack->top;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

t_node	find_min_int(t_stack *stack)
{
	t_node	*tmp;
	t_node	*min;

	tmp = stack->top;
	min = tmp;
	while (tmp)
	{
		if (tmp->data < min->data)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

t_node	find_max_int(t_stack *stack)
{
	t_node	*tmp;
	t_node	*max;

	tmp = stack->top;
	max = tmp;
	while (tmp)
	{
		if (tmp->data > max->data)
			max = tmp;
		tmp = tmp->next;
	}
	return (max);
}
