/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:48:55 by meourea           #+#    #+#             */
/*   Updated: 2022/01/14 15:39:05 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_bubble_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	while (i < size - 1)
	{
		j = size - 1;
		while (j > i)
		{
			if (arr[j - 1] > arr[j])
			{
				n = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = n;
			}
			j--;
		}
		i++;
	}
	return (*arr);
}

void	ft_sort_3(t_info **stack_a)
{
	if ((*stack_a)->index == ft_max_index(stack_a))
		ft_ra(stack_a);
	if ((*stack_a)->index == ft_min_index(stack_a) && \
	(*stack_a)->next->index == ft_max_index(stack_a))
	{
		ft_rra(stack_a);
		ft_sa(stack_a);
	}
	if ((*stack_a)->index != ft_min_index(stack_a) && \
	(*stack_a)->index > (*stack_a)->next->index)
		ft_sa(stack_a);
	if ((*stack_a)->index != ft_min_index(stack_a) && \
	(*stack_a)->index < (*stack_a)->next->index)
		ft_rra(stack_a);
}

void	ft_sort_4_5(t_info **stack_a, t_info **stack_b, int size, int k)
{
	int	i;

	i = 0;
	while (i < k)
	{
		if ((*stack_a)->index > ft_min_index(stack_a) && \
		!ft_check_middle(stack_a, ft_min_index(stack_a), size))
			ft_ra(stack_a);
		else if ((*stack_a)->index > ft_min_index(stack_a) && \
		ft_check_middle(stack_a, ft_min_index(stack_a), size))
			ft_rra(stack_a);
		else
		{
			ft_pb(stack_a, stack_b);
			size--;
			i++;
		}
	}
	if ((*stack_a)->index != ft_min_index(stack_a))
		ft_sa(stack_a);
	while (*stack_b != NULL)
		ft_pa(stack_a, stack_b);
}

void	ft_sorting(t_info **stack_a, t_info **stack_b, int size)
{
	if (size == 2)
		ft_sa(stack_a);
	if (size == 3)
		ft_sort_3(stack_a);
	if (size == 4)
		ft_sort_4_5(stack_a, stack_b, size - 1, 2);
	if (size == 5)
		ft_sort_4_5(stack_a, stack_b, size - 1, 3);
	if (size > 5)
		ft_main_sort(stack_a, stack_b, size - 1);
}
