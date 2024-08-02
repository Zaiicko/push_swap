/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:53:23 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/02 20:53:35 by zaiicko          ###   ########.fr       */
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
	if (a->top)
		a->top->prev = first_b;
	else
		a->bot = first_b;
	a->top = first_b;
	b->size--;
	a->size++;
}
