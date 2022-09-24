/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:54:23 by meourea           #+#    #+#             */
/*   Updated: 2022/01/14 12:20:51 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_number(int argc, char **argv)
{
	if (!(ft_isdigit(argv[argc - 1][0])) && argv[argc - 1][0] != '-')
		ft_error();
	if (argv[argc - 1][0] == '-' && !(ft_isdigit(argv[argc - 1][1])))
		ft_error();
}

void	ft_start(t_info **stack_a, t_info **stack_b, int size)
{
	ft_check_replays(*stack_a, size);
	ft_get_index(stack_a, size);
	if (!(ft_sorted(*stack_a)))
		ft_sorting(stack_a, stack_b, size);
}

void	ft_stack_clear(t_info **stack_a)
{
	t_info	*tmp1;
	t_info	*tmp2;

	tmp1 = *stack_a;
	while (tmp1 != NULL)
	{
		tmp2 = tmp1->next;
		free(tmp1);
		tmp1 = tmp2;
	}
}
