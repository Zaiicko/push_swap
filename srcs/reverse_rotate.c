/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 03:20:35 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/07 18:37:01 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	reverse_rotate(t_stack *stack)
{
	t_node	*tmp;

	if (!stack)
		ft_error();
	tmp = stack->bot;
	stack->bot = stack->bot->prev;
	stack->bot->next = NULL;
	tmp->prev = NULL;
	tmp->next = stack->top;
	stack->top->prev = tmp;
	stack->top = tmp;
}

void	rra(t_stack *a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_stack *b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}
