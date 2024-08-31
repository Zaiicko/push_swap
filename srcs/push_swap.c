/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 23:28:19 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/31 05:33:37 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sort_three(t_stack *a)
{
	t_node	*max;

	max = find_max_int(a);
	if (a->top == max)
		ra(a);
	else if (a->top->next == max)
		rra(a);
	if (a->top->data > a->top->next->data)
		sa(a);
}

void	sort_stack(t_stack *a, t_stack *b)
{
	int i = 0;

	if (a->size > 3 && !is_sorted(a))
		pb(a, b);
	if (a->size > 3 && !is_sorted(a))
		pb(a, b);
	while (a->size > 3 && !is_sorted(a))
	{
		set_pos(a, b);
		min_target_closer(a, b);
		set_min_moves(a, b);
		a_to_b(a, b);
	}
	sort_three(a);
	ft_printf("\n---------- \n a stack :\n");
	print_pma(a);
	ft_printf("\n---------- \n b stack :\n");
	print_pma(b);
		ft_printf("\nLA STACK A :\n");
		ft_print_lst(a->top);
		ft_printf("\nLA STACK B :\n");
		ft_print_lst(b->top);
	while (b->size > 0)
	{
		ft_printf("\n /%d/ \n", i++);
		set_pos(a, b);
		ft_printf("\n---------- \n a stack :\n");
		print_pma(a);
		ft_printf("\n---------- \n b stack :\n");
		print_pma(b);
		max_target_closer(b, a);
		b_to_a(a, b);
		ft_printf("\nLA STACK A :\n");
		ft_print_lst(a->top);
		ft_printf("\nLA STACK B :\n");
		ft_print_lst(b->top);
		ft_printf("\n---------- \n a stack :\n");
		print_pma(a);
		ft_printf("\n---------- \n b stack :\n");
		print_pma(b);
	}

}

void	push_swap(t_stack *a, t_stack *b)
{
	if (!is_sorted(a))
	{
		ft_printf("stack before sort : \n");
		ft_print_lst(a->top);
		if (a->size == 2)
			sa(a);
		else if (a->size == 3)
			sort_three(a);
		else
			sort_stack(a, b);
		min_on_top(a);
	}
	ft_printf("\nstack after sort : \n");
	ft_print_lst(a->top);
}
