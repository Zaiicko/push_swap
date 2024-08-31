/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 01:52:05 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/31 16:32:04 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_node	*find_max_int(t_stack *stack)
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

void	min_target_closer(t_stack *a, t_stack *b)
{
	int		min;
	t_node	*tmp_a;
	t_node	*tmp_b;

	tmp_a = a->top;
	while (tmp_a)
	{
		min = INT_MIN;
		tmp_b = b->top;
		tmp_a->target = find_max_int(b);
		while (tmp_b)
		{
			if (tmp_a->data > tmp_b->data && tmp_b->data >= min)
			{
				min = tmp_b->data;
				tmp_a->target = tmp_b;
			}
			tmp_b = tmp_b->next;
		}
		tmp_a = tmp_a->next;
	}
}

void	max_target_closer(t_stack *b, t_stack *a)
{
	int		max;
	t_node	*tmp_a;
	t_node	*tmp_b;

	tmp_b = b->top;
	while (tmp_b)
	{
		max = INT_MAX;
		tmp_a = a->top;
		tmp_b->target = find_min_int(a);
		while (tmp_a)
		{
			if (tmp_b->data < tmp_a->data && tmp_a->data <= max)
			{
				max = tmp_a->data;
				tmp_b->target = tmp_a;
			}
			tmp_a = tmp_a->next;
		}
		tmp_b = tmp_b->next;
	}
}

void	set_pos(t_stack *a, t_stack *b)
{
	int		i;
	int		med_a;
	int		med_b;
	t_node	*tmp;

	i = 0;
	med_a = a->size / 2;
	med_b = b->size / 2;
	tmp = a->top;
	while (tmp)
	{
		if (i < med_a)
			tmp->above_median = 1;
		else
			tmp->above_median = 0;
		tmp->pos = i;
		i++;
		tmp = tmp->next;
	}
	i = 0;
	tmp = b->top;
	while (tmp)
	{
		if (i < med_b)
			tmp->above_median = 1;
		else
			tmp->above_median = 0;
		tmp->pos = i;
		i++;
		tmp = tmp->next;
	}
}

void	min_on_top(t_stack *a)
{
	t_node	*min_node;

	min_node = find_min_int(a);
	while (a->top->data != min_node->data)
	{
		if (min_node->above_median)
			ra(a);
		else
			rra(a);
	}
}
