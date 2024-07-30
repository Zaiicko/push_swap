/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 01:52:05 by zaiicko           #+#    #+#             */
/*   Updated: 2024/07/30 18:27:31 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	add_int(int data, t_stack *stack)
{
	t_node	*node;

	node = ft_newnode(data);
	if (!stack)
		ft_error();
	if (stack->top)
	{
		stack->top->prev = node;
		node->next = stack->top;
	}
	else
		stack->bot = node;
	stack->top = node;
	stack->size++;
}

void	fill_stack(char **av, t_stack *stack)
{
	size_t	i;
	int		data;

	if (!stack)
		ft_error();
	i = 0;
	while (av[i])
	{
		data = ft_atoi(av[i]);
		add_int(data, stack);
		i++;
	}
}
