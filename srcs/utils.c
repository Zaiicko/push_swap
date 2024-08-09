/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:08:09 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/07 19:18:48 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_free_lst(t_node *node)
{
	t_node	*tmp;

	while (node)
	{
		tmp = node;
		node = node->next;
		free(tmp);
	}
}

void	ft_print_lst(t_node *node)
{
	while (node)
	{
		ft_printf(" %d\n", node->data);
		node = node->next;
	}
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

t_node	*ft_newnode(int data)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		ft_error();
	new->data = data;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

t_stack	*ft_reset_stack(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		ft_error();
	stack->size = 0;
	stack->top = NULL;
	stack->bot = NULL;
	return (stack);
}
