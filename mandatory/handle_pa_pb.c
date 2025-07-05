/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pa_pb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtumanya <mtumanya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 17:51:55 by mtumanya          #+#    #+#             */
/*   Updated: 2025/07/05 17:51:55 by mtumanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	if (!b || !*b)
		return ;
	push_front(a, (*b)->value, (*b)->index);
	pop_front(b);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	if (!a || !*a)
		return ;
	push_front(b, (*a)->value, (*a)->index);
	pop_front(a);
	write(1, "pb\n", 3);
}
