#include "../inc/push_swap.h"

int	main()
{
	int	data = 5;
	t_node	*node = ft_newnode(data);

	if (!node)
		ft_error();
	if (node->data != data)
	{
		ft_free_node(node);
		ft_error();
	}
	else
	{
		ft_print_node(node);
		ft_free_node(node);
	}
	return (0);
}
		
