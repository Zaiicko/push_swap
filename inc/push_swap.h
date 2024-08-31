/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 23:28:23 by zaiicko           #+#    #+#             */
/*   Updated: 2024/08/31 16:38:06 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/inc/libft.h"

typedef struct s_node
{
	int				data;
	int				pos;
	int				min_moves;
	int				above_median;
	struct s_node	*next;
	struct s_node	*prev;
	struct s_node	*target;
}	t_node;

typedef struct s_stack
{
	int		size;
	t_node	*top;
	t_node	*bot;
}	t_stack;

t_node		*ft_newnode(int data);
void		ft_free_lst(t_node *node);
void		ft_print_lst(t_node *node);
void		ft_error(void);
t_stack		*ft_reset_stack(void);

void		add_int(int data, t_stack *stack);
void		fill_stack(char **av, t_stack *stack);

void		swap(t_stack *stack);
void		ss(t_stack *a, t_stack *b);
void		pa(t_stack *a, t_stack *b);
void		pb(t_stack *a, t_stack *b);
void		rotate(t_stack *stack);
void		rr(t_stack *a, t_stack *b);
void		reverse_rotate(t_stack *stack);
void		rrr(t_stack *a, t_stack *b);
void		rra(t_stack *a);
void		rrb(t_stack *b);
void		ra(t_stack *a);
void		rb(t_stack *b);
void		sa(t_stack *a);
void		sb(t_stack *b);

int			is_sorted(t_stack *stack);
void		push_swap(t_stack *a, t_stack *b);
t_node		*find_max_int(t_stack *stack);
t_node		*find_min_int(t_stack *stack);
void		sort_three(t_stack *a);
void		set_pos(t_stack *a, t_stack *b);
void		set_min_moves(t_stack *a, t_stack *b);
void		min_target_closer(t_stack *a, t_stack *b);
void		max_target_closer(t_stack *b, t_stack *a);
t_node		*get_best_min_mov(t_stack *a);
void		best_min_move_top(t_stack *stack, t_node *best, int is_a);
void		a_to_b(t_stack *a, t_stack *b);
void		b_to_a(t_stack *a, t_stack *b);
void		min_on_top(t_stack *a);

int			is_integer(char	*str);
int			check_av(char **av);
void		args_parser(int ac, char **av);
int			is_int_max(char *str);
long long	ft_matoi(const char *str);
int			is_dup(char **av);

#endif
