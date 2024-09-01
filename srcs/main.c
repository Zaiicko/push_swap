/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 03:04:49 by zaiicko           #+#    #+#             */
/*   Updated: 2024/09/01 20:14:14 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = ft_reset_stack();
	b = ft_reset_stack();
	args_parser(ac, av);
	fill_stack(av + 1, a, ac);
	push_swap(a, b);
	ft_free_lst(a->top);
	free(a);
	free(b);
	return (0);
}
