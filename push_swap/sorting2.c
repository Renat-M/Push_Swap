/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:49:00 by meourea           #+#    #+#             */
/*   Updated: 2021/10/18 13:49:01 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa_all(t_info **stack_a, t_info **stack_b, int size)
{
	while ((*stack_b) != NULL)
	{
		if ((*stack_b)->index != ft_max_index(stack_b) && \
		!ft_check_middle(stack_b, ft_max_index(stack_b), size))
			ft_rb(stack_b);
		else if ((*stack_b)->index != ft_max_index(stack_b) && \
		ft_check_middle(stack_b, ft_max_index(stack_b), size))
			ft_rrb(stack_b);
		else if ((*stack_b)->index == ft_max_index(stack_b))
		{
			ft_pa(stack_a, stack_b);
			size--;
		}
	}
}

void	ft_main_sort(t_info **stack_a, t_info **stack_b, int size)
{
	int	i;
	int	k;

	if (size <= 100)
		k = 10;
	if (size > 100)
		k = 30;
	i = 0;
	while (*stack_a != NULL)
	{
		if ((*stack_a)->index <= i)
		{
			ft_pb(stack_a, stack_b);
			ft_rb(stack_b);
			i++;
		}
		else if ((*stack_a)->index <= i + k)
		{
			ft_pb(stack_a, stack_b);
			i++;
		}
		else if ((*stack_a)->index >= i)
			ft_ra(stack_a);
	}
	ft_pa_all(stack_a, stack_b, size);
}
