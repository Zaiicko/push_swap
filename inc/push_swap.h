/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 23:28:23 by zaiicko           #+#    #+#             */
/*   Updated: 2024/07/06 19:00:40 by zaiicko          ###   ########.fr       */
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

t_node	*ft_newnode(int data);

#endif