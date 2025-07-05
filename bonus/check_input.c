/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtumanya <mtumanya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 21:16:31 by mtumanya          #+#    #+#             */
/*   Updated: 2025/07/04 21:16:32 by mtumanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	invalid_input(char *s, t_stack **a, t_stack **b)
{
	free_stack(a);
	free_stack(b);
	free(s);
	write(1, "Error\n", 6);
	exit(0);
}

static void	check_type(char *str, t_stack **a, t_stack **b)
{
	if (ft_strncmp(str, "sa\n", 3) == 0)
		sa(a);
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		sb(b);
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		ss(a, b);
	else if (ft_strncmp(str, "pa\n", 3) == 0)
		pa(a, b);
	else if (ft_strncmp(str, "pb\n", 3) == 0)
		pb(a, b);
	else if (ft_strncmp(str, "ra\n", 3) == 0)
		ra(a);
	else if (ft_strncmp(str, "rb\n", 3) == 0)
		rb(b);
	else if (ft_strncmp(str, "rr\n", 3) == 0)
		rr(a, b);
	else if (ft_strncmp(str, "rra\n", 4) == 0)
		rra(a);
	else if (ft_strncmp(str, "rrb\n", 4) == 0)
		rrb(b);
	else if (ft_strncmp(str, "rrr\n", 4) == 0)
		rrr(a, b);
	else
		invalid_input(str, a, b);
}

void	read_input(t_stack **a, t_stack **b)
{
	char	*str;

	while (1)
	{
		str = get_next_line(0);
		if (str)
			check_type(str, a, b);
		else
			break ;
		free(str);
	}
}
