/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 03:04:49 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/11 21:16:36 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a = ft_reset_stack();
	//t_stack	*b = ft_reset_stack();

	args_parser(ac, av);
	fill_stack(av, a);
	if (check_dup(a))
	{
		ft_free_lst(a->top);
		ft_error();
	}
	return (0);
}
