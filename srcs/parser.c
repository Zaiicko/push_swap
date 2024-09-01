/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 03:28:35 by zaiicko           #+#    #+#             */
/*   Updated: 2024/09/02 00:22:30 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	is_integer(char	*str)
{
	size_t	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_av(char **av)
{
	size_t	i;

	i = 0;
	while (av[i])
	{
		if (!is_integer(av[i]) || is_int_max(av[i]) || is_dup(av))
			return (0);
		i++;
	}
	return (1);
}

int	is_int_max(char *str)
{
	ssize_t	nbr;

	if (!str)
		ft_error();
	nbr = ft_matoi(str);
	if (nbr > INT_MAX || nbr < INT_MIN)
		return (1);
	return (0);
}

int	is_dup(char **av)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_matoi(av[i]) == ft_matoi(av[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	args_parser(int ac, char **av)
{
	char	**tab;

	if (ac < 2)
		exit(0);
	else if (ac > 2)
	{
		if (!check_av(av + 1))
			ft_error();
	}
	else
	{
		tab = ft_split(av[1], ' ');
		if (!tab || !check_av(tab))
		{
			ft_free_tab(tab);
			ft_error();
		}
		ft_free_tab(tab);
	}
}
