/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:49:12 by meourea           #+#    #+#             */
/*   Updated: 2022/01/12 16:46:02 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_info **stack_a)
{
	t_info	*tmp1;
	t_info	*tmp2;

	tmp1 = *stack_a;
	tmp2 = *stack_a;
	*stack_a = (*stack_a)->next;
	while (tmp1->next != NULL)
		tmp1 = tmp1->next;
	tmp1->next = tmp2;
	tmp1->next->next = NULL;
	write(1, "ra\n", 3);
}

void	ft_rb(t_info **stack_b)
{
	t_info	*tmp1;
	t_info	*tmp2;

	tmp1 = *stack_b;
	tmp2 = *stack_b;
	*stack_b = (*stack_b)->next;
	while (tmp1->next != NULL)
		tmp1 = tmp1->next;
	tmp1->next = tmp2;
	tmp1->next->next = NULL;
	write(1, "rb\n", 3);
}

void	ft_rra(t_info **stack_a)
{
	t_info	*tmp1;
	t_info	*tmp2;

	tmp1 = *stack_a;
	tmp2 = *stack_a;
	while (tmp1->next->next != NULL)
		tmp1 = tmp1->next;
	*stack_a = tmp1->next;
	tmp1->next = NULL;
	(*stack_a)->next = tmp2;
	write(1, "rra\n", 4);
}

void	ft_rrb(t_info **stack_b)
{
	t_info	*tmp1;
	t_info	*tmp2;

	tmp1 = *stack_b;
	tmp2 = *stack_b;
	while (tmp1->next->next != NULL)
		tmp1 = tmp1->next;
	*stack_b = tmp1->next;
	tmp1->next = NULL;
	(*stack_b)->next = tmp2;
	write(1, "rrb\n", 4);
}
