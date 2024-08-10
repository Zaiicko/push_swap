/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:51:35 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/10 23:30:16 by zaiicko          ###   ########.fr       */
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

int	check_dup(t_stack *stack)
{
	t_node	*tmp;

	if (!stack)
		ft_error();
	while (stack->top)
	{
		tmp = stack->top->next;
		while (tmp)
		{
			if (stack->top->data == tmp->data)
				return (1);
			tmp = tmp->next;
		}
		stack->top = stack->top->next;
	}
	return (0);
}
