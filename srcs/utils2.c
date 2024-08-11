/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:51:35 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/11 20:47:24 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	add_int(int data, t_stack *stack)
{
	t_node	*node;

	node = ft_newnode(data);
	if (!stack)
		ft_error();
	if (stack->top)
	{
		stack->top->prev = node;
		node->next = stack->top;
	}
	else
		stack->bot = node;
	stack->top = node;
	stack->size++;
}

void	fill_stack(char **av, t_stack *stack)
{
	size_t	i;
	int		data;

	if (!stack)
		ft_error();
	i = 0;
	while (av[i])
	{
		data = ft_atoi(av[i]);
		add_int(data, stack);
		i++;
	}
}

int	check_dup(t_stack *stack)
{
	t_node	*tmp;
	t_node	*node;

	if (!stack)
		ft_error();
	node = stack->top;
	while (node)
	{
		tmp = node->next;
		while (tmp)
		{
			if (node->data == tmp->data)
				return (1);
			tmp = tmp->next;
		}
		node = node->next;
	}
	return (0);
}

int	check_max_int(t_stack *stack)
{
	t_node	*node;

	if (!stack)
		ft_error();
	node = stack->top;
	while(node)
	{
		if (node->data > INT_MAX || node->data < INT_MIN)
			return (1);
		node = node->next;
	}
	return (0);
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
