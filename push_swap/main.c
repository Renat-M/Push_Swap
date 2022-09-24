/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 12:20:10 by meourea           #+#    #+#             */
/*   Updated: 2022/01/14 13:46:08 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_info	*stack_a;
	t_info	*stack_b;
	int		number;
	int		size;

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		size = 0;
		while (argc != 1)
		{
			ft_check_number(argc, argv);
			number = ft_atoi(argv[--argc]);
			ft_add_element(&stack_a, number);
			size++;
		}
		if (size > 0)
		{
			ft_start(&stack_a, &stack_b, size);
			ft_stack_clear(&stack_a);
		}
	}
	return (0);
}
