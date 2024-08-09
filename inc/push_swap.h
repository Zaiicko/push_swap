/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 23:28:23 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/09 22:50:26 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/inc/libft.h"

typedef struct s_node
{
	int				data;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	int		size;
	t_node	*top;
	t_node	*bot;
}	t_stack;

t_node	*ft_newnode(int data);
void	ft_free_lst(t_node *node);
void	ft_print_lst(t_node *node);
void	ft_error(void);
t_stack	*ft_reset_stack(void);

void	add_int(int data, t_stack *stack);
void	fill_stack(char **av, t_stack *stack);

void	swap(t_stack *stack);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	rotate(t_stack *stack);
void	rr(t_stack *a, t_stack *b);
void	reverse_rotate(t_stack *stack);
void	rrr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	sa(t_stack *a);
void	sb(t_stack *b);

int		is_sorted(t_stack *stack);

#endif
