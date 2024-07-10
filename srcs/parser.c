/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 03:28:35 by zaiicko           #+#    #+#             */
/*   Updated: 2024/07/10 19:00:44 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void args_parser(t_node **a, int ac, char **av)
{
	size_t i;

	i = 0;
	while(i < ac)
	{
		if (!ft_isdigit(argv[i]))
			ft_error();
	}
}