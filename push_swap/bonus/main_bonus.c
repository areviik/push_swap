#include "push_swap_bonus.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	a = NULL;
	b = NULL;
	validate_args(argc, argv, &a);
	index_sort(&a);
	read_input(&a, &b);
	if (is_sorted(a) && b == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
