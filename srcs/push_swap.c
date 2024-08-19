/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 23:28:19 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/19 05:41:27 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sort_three(t_stack *a)
{
	int	max;

	max = find_max_int(a);
	if (a->top->data == max)
		ra(a);
	else if (a->top->next->data == max)
		rra(a);
	if (a->top->data > a->top->next->data)
		sa(a);
}

void	push_swap(t_stack *a, t_stack *b)
{
	(void)b;
	if (!is_sorted(a))
	{
		ft_printf("stack before sort : \n");
		ft_print_lst(a->top);
		if (a->size == 2)
			sa(a);
		else if (a->size == 3)
			sort_three(a);
	}
	ft_printf("\nstack after sort : \n");
	ft_print_lst(a->top);
}
