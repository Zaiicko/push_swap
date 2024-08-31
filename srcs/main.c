/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 03:04:49 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/31 16:31:18 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = reset_stack();
	b = reset_stack();
	args_parser(ac, av);
	fill_stack(av + 1, a);
	push_swap(a, b);
	ft_free_lst(a->top);
	return (0);
}
