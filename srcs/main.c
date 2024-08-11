/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 03:04:49 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/12 01:19:06 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a = ft_reset_stack();
	//t_stack	*b = ft_reset_stack();

	args_parser(ac, av);
	fill_stack(av, a);
	return (0);
}
