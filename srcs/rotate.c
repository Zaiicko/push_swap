/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 21:55:22 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/07 18:38:25 by zaiicko          ###   ########.fr       */
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
	stack->top->prev = NULL;
	tmp->next = NULL;
	tmp->prev = stack->bot;
	stack->bot->next = tmp;
	stack->bot = tmp;
}

void	ra(t_stack *a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_stack *b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
