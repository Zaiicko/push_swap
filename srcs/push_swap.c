/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 23:28:19 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/31 06:15:34 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sort_three(t_stack *a)
{
	t_node	*max;

	max = find_max_int(a);
	if (a->top == max)
		ra(a);
	else if (a->top->next == max)
		rra(a);
	if (a->top->data > a->top->next->data)
		sa(a);
}

void	sort_stack(t_stack *a, t_stack *b)
{
	if (a->size > 3 && !is_sorted(a))
		pb(a, b);
	if (a->size > 3 && !is_sorted(a))
		pb(a, b);
	while (a->size > 3 && !is_sorted(a))
	{
		set_pos(a, b);
		min_target_closer(a, b);
		set_min_moves(a, b);
		a_to_b(a, b);
	}
	sort_three(a);
	while (b->size > 0)
	{
		set_pos(a, b);
		max_target_closer(b, a);
		b_to_a(a, b);
	}

}

void	push_swap(t_stack *a, t_stack *b)
{
	if (!is_sorted(a))
	{
		if (a->size == 2)
			sa(a);
		else if (a->size == 3)
			sort_three(a);
		else
			sort_stack(a, b);
		min_on_top(a);
	}
}
