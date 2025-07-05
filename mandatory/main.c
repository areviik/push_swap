/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtumanya <mtumanya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:11:03 by mtumanya          #+#    #+#             */
/*   Updated: 2025/07/05 18:12:18 by mtumanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		size;

	a = NULL;
	b = NULL;
	if (argc < 2)
		exit(EXIT_FAILURE);
	if (!validate_args(argc, argv, &a))
	{
		write(2, "Error\n", 6);
		free_stack(&a);
		exit(EXIT_FAILURE);
	}
	index_sort(&a);
	size = stack_size(a);
	if (!is_sorted(a))
	{
		if (size <= 5)
			sort_type(&a, &b, size);
		else
			chunk_sort(&a, &b);
	}
	free_stack(&a);
	return (0);
}
