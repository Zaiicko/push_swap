/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 21:55:22 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/03 03:15:47 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rotate(t_stack *stack)
{
	t_node	*tmp;

	if (!stack)
		ft_error();
	tmp = stack->top;
	stack->top = stack->top->next;
	tmp->next = NULL;
	stack->bot->next = tmp;
	stack->bot = tmp;
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
}
