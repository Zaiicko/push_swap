/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:30:45 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/31 17:37:31 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	set_pos_node(t_node *tmp, int i, int med)
{
	while (tmp)
	{
		if (i < med)
			tmp->above_median = 1;
		else
			tmp->above_median = 0;
		tmp->pos = i;
		i++;
		tmp = tmp->next;
	}
}
