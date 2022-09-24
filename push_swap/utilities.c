/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:48:43 by meourea           #+#    #+#             */
/*   Updated: 2021/10/18 13:48:44 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_element(t_info **stack_a, int number)
{
	t_info	*tmp;

	tmp = malloc(sizeof(t_info));
	if (!tmp)
		ft_error();
	tmp->number = number;
	tmp->next = *stack_a;
	*stack_a = tmp;
}

int	ft_add_element_arr(int *arr, t_info *stack_a, int size)
{
	int	i;

	i = 0;
	while (i != size)
	{
		arr[i++] = stack_a->number;
		stack_a = stack_a->next;
	}
	return (*arr);
}

int	ft_pull_index(int *arr, int number)
{
	int	i;

	i = 0;
	while (arr[i] != number)
		i++;
	return (i);
}

void	ft_get_index(t_info **stack_a, int size)
{
	t_info	*tmp;
	int		*sorted_arr;
	int		*arr;
	int		i;

	sorted_arr = malloc(sizeof(int) * size);
	arr = malloc(sizeof(int) * size);
	if (!sorted_arr || !arr)
		ft_error();
	tmp = *stack_a;
	*sorted_arr = ft_add_element_arr(sorted_arr, tmp, size);
	*arr = ft_add_element_arr(arr, tmp, size);
	*sorted_arr = ft_bubble_sort(sorted_arr, size);
	i = 0;
	while (i < size)
	{
		tmp->index = ft_pull_index(sorted_arr, arr[i++]);
		tmp = tmp->next;
	}
	free(sorted_arr);
	free(arr);
}

int	ft_sorted(t_info *stack_a)
{
	while (stack_a->next != NULL)
	{
		if (stack_a->index + 1 == stack_a->next->index)
			stack_a = stack_a->next;
		else
			return (0);
	}
	return (1);
}
