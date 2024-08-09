/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:51:35 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/07 19:20:25 by zaiicko          ###   ########.fr       */
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
