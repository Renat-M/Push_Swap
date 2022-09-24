/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands3_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 13:23:35 by meourea           #+#    #+#             */
/*   Updated: 2022/01/14 13:28:31 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrr_b(t_info **stack_a, t_info **stack_b)
{
	if (*stack_a != NULL && (*stack_a)->next != NULL && \
		*stack_b != NULL && (*stack_b)->next != NULL)
	{
		ft_rra_b(stack_a);
		ft_rrb_b(stack_b);
	}
}
