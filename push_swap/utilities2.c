/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:48:46 by meourea           #+#    #+#             */
/*   Updated: 2022/01/14 13:46:20 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max_index(t_info **stack_a)
{
	t_info	*tmp;
	int		i;

	tmp = *stack_a;
	i = tmp->index;
	while (tmp != NULL)
	{
		if (i < tmp->index)
			i = tmp->index;
		tmp = tmp->next;
	}
	return (i);
}

int	ft_min_index(t_info **stack_a)
{
	t_info	*tmp;
	int		i;

	tmp = *stack_a;
	i = tmp->index;
	while (tmp != NULL)
	{
		if (i > tmp->index)
			i = tmp->index;
		tmp = tmp->next;
	}
	return (i);
}

int	ft_add_index_arr(int *arr, t_info *stack_a, int size)
{
	int	i;

	i = 0;
	while (i != size && stack_a)
	{
		arr[i++] = stack_a->index;
		stack_a = stack_a->next;
	}
	return (*arr);
}

int	ft_check_middle(t_info **stack_a, int index, int size)
{
	int	i;
	int	*arr;

	arr = malloc(sizeof(int) * (size + 1));
	if (!arr)
		ft_error();
	*arr = ft_add_index_arr(arr, *stack_a, size + 1);
	i = size;
	while (arr[size] != index)
		size--;
	i = i - size;
	size = 0;
	while (arr[size] != index)
		size++;
	free(arr);
	if (size > i)
		return (1);
	return (0);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
