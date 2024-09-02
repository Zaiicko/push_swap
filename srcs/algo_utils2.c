/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 23:28:19 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/31 16:36:06 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	set_min_moves(t_stack *a, t_stack *b)
{
	int		moves_a;
	int		moves_b;
	t_node	*tmp;

	moves_a = 0;
	moves_b = 0;
	tmp = a->top;
	while (tmp)
	{
		if (tmp->pos <= a->size / 2)
			moves_a = tmp->pos;
		else
			moves_a = a->size - tmp->pos;
		if (tmp->target->pos <= b->size / 2)
			moves_b = tmp->target->pos;
		else
			moves_b = b->size - tmp->target->pos;
		tmp->min_moves = moves_a + moves_b;
		tmp = tmp->next;
	}
}

t_node	*get_best_min_mov(t_stack *a)
{
	int		min_moves;
	t_node	*tmp;
	t_node	*best;

	min_moves = INT_MAX;
	tmp = a->top;
	best = tmp;
	while (tmp)
	{
		if (tmp->min_moves < min_moves)
		{
			min_moves = tmp->min_moves;
			best = tmp;
		}
		tmp = tmp->next;
	}
	return (best);
}

void	best_min_move_top(t_stack *stack, t_node *best, int is_a)
{
	if (!best)
		return ;
	while (stack->top != best)
	{
		if (is_a)
		{
			if (best->above_median)
				ra(stack);
			else
				rra(stack);
		}
		else
		{
			if (best->above_median)
				rb(stack);
			else
				rrb(stack);
		}
	}
}

void	a_to_b(t_stack *a, t_stack *b)
{
	t_node	*best;

	best = get_best_min_mov(a);
	if (best->above_median == best->target->above_median)
	{
		if (best->above_median)
		{
			while (a->top != best && b->top != best->target)
				rr(a, b);
		}
		else
		{
			while (a->top != best && b->top != best->target)
				rrr(a, b);
		}
	}
	best_min_move_top(a, best, 1);
	best_min_move_top(b, best->target, 0);
	pb(a, b);
}

void	b_to_a(t_stack *a, t_stack *b)
{
	best_min_move_top(a, b->top->target, 1);
	pa(a, b);
}
