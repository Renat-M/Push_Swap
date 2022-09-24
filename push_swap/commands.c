/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:49:06 by meourea           #+#    #+#             */
/*   Updated: 2021/10/18 13:49:07 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_info **stack_a)
{
	t_info	*tmp1;
	t_info	*tmp2;

	tmp1 = *stack_a;
	tmp2 = tmp1->next->next;
	*stack_a = (*stack_a)->next;
	(*stack_a)->next = tmp1;
	(*stack_a)->next->next = tmp2;
	write(1, "sa\n", 3);
}

void	ft_sb(t_info **stack_b)
{
	t_info	*tmp1;
	t_info	*tmp2;

	tmp1 = *stack_b;
	tmp2 = tmp1->next->next;
	*stack_b = (*stack_b)->next;
	(*stack_b)->next = tmp1;
	(*stack_b)->next->next = tmp2;
	write(1, "sb\n", 3);
}

void	ft_pa(t_info **stack_a, t_info **stack_b)
{
	t_info	*tmp;

	tmp = *stack_b;
	*stack_b = tmp->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	write(1, "pa\n", 3);
}

void	ft_pb(t_info **stack_a, t_info **stack_b)
{
	t_info	*tmp;

	tmp = *stack_a;
	*stack_a = tmp->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	write(1, "pb\n", 3);
}
