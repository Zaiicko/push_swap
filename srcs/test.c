#include "../inc/push_swap.h"

int main(int ac, char **av) 
{
	if (ac < 2)
		ft_error();

	t_stack *stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		ft_error();
	stack->top = NULL;
	stack->bot = NULL;
	stack->size = 0;

	fill_stack(av + 1, stack);

	ft_printf("Nombres de la pile ::\n");
	ft_print_lst(stack->top);

	ft_free_lst(stack->top);
	free(stack);

	return (0);
}
