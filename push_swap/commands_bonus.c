/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:05:47 by meourea           #+#    #+#             */
/*   Updated: 2022/01/14 13:45:55 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa_b(t_info **stack_a)
{
	t_info	*tmp1;
	t_info	*tmp2;

	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		tmp1 = *stack_a;
		tmp2 = tmp1->next->next;
		*stack_a = (*stack_a)->next;
		(*stack_a)->next = tmp1;
		(*stack_a)->next->next = tmp2;
	}
}

void	ft_sb_b(t_info **stack_b)
{
	t_info	*tmp1;
	t_info	*tmp2;

	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		tmp1 = *stack_b;
		tmp2 = tmp1->next->next;
		*stack_b = (*stack_b)->next;
		(*stack_b)->next = tmp1;
		(*stack_b)->next->next = tmp2;
	}
}

void	ft_pa_b(t_info **stack_a, t_info **stack_b)
{
	t_info	*tmp;

	if (*stack_b != NULL)
	{
		tmp = *stack_b;
		*stack_b = tmp->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
	}
}

void	ft_pb_b(t_info **stack_a, t_info **stack_b)
{
	t_info	*tmp;

	if (*stack_a != NULL)
	{
		tmp = *stack_a;
		*stack_a = tmp->next;
		tmp->next = *stack_b;
		*stack_b = tmp;
	}
}

void	ft_ss_b(t_info **stack_a, t_info **stack_b)
{
	if (*stack_a != NULL && (*stack_a)->next != NULL && \
		*stack_b != NULL && (*stack_b)->next != NULL)
	{
		ft_sa_b(stack_a);
		ft_sb_b(stack_b);
	}
}
