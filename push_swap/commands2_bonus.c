/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands2_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:07:36 by meourea           #+#    #+#             */
/*   Updated: 2022/01/14 13:45:32 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra_b(t_info **stack_a)
{
	t_info	*tmp1;
	t_info	*tmp2;

	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		tmp1 = *stack_a;
		tmp2 = *stack_a;
		*stack_a = (*stack_a)->next;
		while (tmp1->next != NULL)
			tmp1 = tmp1->next;
		tmp1->next = tmp2;
		tmp1->next->next = NULL;
	}
}

void	ft_rb_b(t_info **stack_b)
{
	t_info	*tmp1;
	t_info	*tmp2;

	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		tmp1 = *stack_b;
		tmp2 = *stack_b;
		*stack_b = (*stack_b)->next;
		while (tmp1->next != NULL)
			tmp1 = tmp1->next;
		tmp1->next = tmp2;
		tmp1->next->next = NULL;
	}
}

void	ft_rra_b(t_info **stack_a)
{
	t_info	*tmp1;
	t_info	*tmp2;

	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		tmp1 = *stack_a;
		tmp2 = *stack_a;
		while (tmp1->next->next != NULL)
			tmp1 = tmp1->next;
		*stack_a = tmp1->next;
		tmp1->next = NULL;
		(*stack_a)->next = tmp2;
	}
}

void	ft_rrb_b(t_info **stack_b)
{
	t_info	*tmp1;
	t_info	*tmp2;

	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		tmp1 = *stack_b;
		tmp2 = *stack_b;
		while (tmp1->next->next != NULL)
			tmp1 = tmp1->next;
		*stack_b = tmp1->next;
		tmp1->next = NULL;
		(*stack_b)->next = tmp2;
	}
}

void	ft_rr_b(t_info **stack_a, t_info **stack_b)
{
	if (*stack_a != NULL && (*stack_a)->next != NULL && \
		*stack_b != NULL && (*stack_b)->next != NULL)
	{
		ft_ra_b(stack_a);
		ft_rb_b(stack_b);
	}
}
