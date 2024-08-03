/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:53:23 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/03 02:00:40 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	t_node	*first_b;

	if (!a || !b)
		ft_error();
	else if (!b->size)
		return ;
	first_b = b->top;
	b->top = b->top->next;
	if (b->top)
		b->top->prev = NULL;
	else
		b->bot = NULL;
	first_b->next = a->top;
	first_b->prev = NULL;
	if (a->top)
		a->top->prev = first_b;
	else
		a->bot = first_b;
	a->top = first_b;
	b->size--;
	a->size++;
}

void	pb(t_stack *a, t_stack *b)
{
	t_node	*first_a;

	if (!a || !b)
		ft_error();
	else if (!a->size)
		return ;
	first_a = a->top;
	a->top = a->top->next;
	if (a->top)
		a->top->prev = NULL;
	else
		a->bot = NULL;
	first_a->next = b->top;
	first_a->prev = NULL;
	if (b->top)
		b->top->prev = first_a;
	else
		b->bot = first_a;
	b->top = first_a;
	a->size--;
	b->size++;
}
