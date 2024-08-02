#include "../inc/push_swap.h"

int main(int ac, char **av) 
{
	if (ac < 2)
		ft_error();

	t_stack *a = ft_reset_stack();
 	t_stack *b = ft_reset_stack();

	fill_stack(av + 1, b);

	ft_printf("Nombres de la pile avant ::\n");
	ft_print_lst(b->top);
	ft_printf("---- a --------\n");
	ft_print_lst(a->top);

	pa(a, b);

	ft_printf("Nombres de la pile apres ::\n");
	ft_print_lst(b->top);
	ft_printf("---- a --------\n");
	ft_print_lst(a->top);

	ft_free_lst(a->top);
	ft_free_lst(b->top);
	free(a);
	free(b);

	return (0);
}
