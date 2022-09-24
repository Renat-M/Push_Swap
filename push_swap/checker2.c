/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:14:43 by meourea           #+#    #+#             */
/*   Updated: 2022/01/14 15:42:48 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sorted_bonus(t_info *stack_a)
{
	if (stack_a == NULL)
		return (0);
	while (stack_a->next != NULL)
	{
		if (stack_a->number < stack_a->next->number)
			stack_a = stack_a->next;
		else
			return (0);
	}
	return (1);
}
