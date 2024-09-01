/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:51:35 by zaiicko           #+#    #+#             */
/*   Updated: 2024/09/01 20:07:23 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	add_int(int data, t_stack *stack)
{
	t_node	*node;

	node = ft_newnode(data);
	if (!stack)
		ft_error();
	if (stack->bot)
	{
		stack->bot->next = node;
		node->prev = stack->bot;
	}
	else
		stack->top = node;
	stack->bot = node;
	stack->size++;
}

void	fill_stack(char **av, t_stack *stack, int ac)
{
	size_t	i;
	char	**tab;

	if (!stack)
		ft_error();
	i = 0;
	if (ac == 2)
	{
		tab = ft_split(av[0], ' ');
		if (!tab)
		{
			ft_free_tab(tab);
			ft_error();
		}
		add_all_int(tab, stack, i);
	}
	else
		add_all_int(av, stack, i);
}

long long	ft_matoi(const char *str)
{
	size_t				i;
	int					signe;
	unsigned long long	nbr;

	i = 0;
	signe = 1;
	nbr = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr * signe);
}

int	is_sorted(t_stack *stack)
{
	t_node	*tmp;

	if (!stack || !stack->top)
		return (0);
	tmp = stack->top;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

t_node	*find_min_int(t_stack *stack)
{
	t_node	*tmp;
	t_node	*min;

	tmp = stack->top;
	min = tmp;
	while (tmp)
	{
		if (tmp->data < min->data)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}
