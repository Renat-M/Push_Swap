/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:51:26 by meourea           #+#    #+#             */
/*   Updated: 2022/01/13 17:32:00 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	ft_check_replays(t_info *stack_a, int size)
{
	int	*arr;
	int	i;
	int	j;

	arr = malloc(sizeof(int) * size);
	if (!arr)
		ft_error();
	*arr = ft_add_element_arr(arr, stack_a, size);
	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
			{
				free(arr);
				ft_error();
			}
			j++;
		}
		i++;
	}
	free(arr);
}
