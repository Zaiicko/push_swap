/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:08:09 by zaiicko           #+#    #+#             */
/*   Updated: 2024/07/10 19:00:08 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_free_node(t_node *node)
{
	t_node	*tmp;

	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
}

void	ft_print_node(t_node *node)
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