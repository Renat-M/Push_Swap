/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:59:29 by meourea           #+#    #+#             */
/*   Updated: 2022/01/14 14:51:48 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_next_line(char **line)
{
	int		bwr;
	int		i;
	char	c;

	bwr = 1;
	i = 0;
	c = 0;
	*line = (char *)malloc(sizeof(char) * 4);
	if (!line)
		ft_error();
	while (bwr > 0 && c != '\n')
	{
		bwr = read(0, &c, 1);
		if (c != '\n')
			line[0][i++] = c;
	}
	line[0][i] = '\0';
	return (bwr);
}

void	ft_commands(char *line, t_info **stack_a, t_info **stack_b)
{
	if (ft_strcmp(line, "sa") == 0)
		ft_sa_b(stack_a);
	else if (ft_strcmp(line, "sb") == 0)
		ft_sb_b(stack_b);
	else if (ft_strcmp(line, "ss") == 0)
		ft_ss_b(stack_a, stack_b);
	else if (ft_strcmp(line, "pa") == 0)
		ft_pa_b(stack_a, stack_b);
	else if (ft_strcmp(line, "pb") == 0)
		ft_pb_b(stack_a, stack_b);
	else if (ft_strcmp(line, "ra") == 0)
		ft_ra_b(stack_a);
	else if (ft_strcmp(line, "rb") == 0)
		ft_rb_b(stack_b);
	else if (ft_strcmp(line, "rr") == 0)
		ft_rr_b(stack_a, stack_b);
	else if (ft_strcmp(line, "rra") == 0)
		ft_rra_b(stack_a);
	else if (ft_strcmp(line, "rrb") == 0)
		ft_rrb_b(stack_b);
	else if (ft_strcmp(line, "rrr") == 0)
		ft_rrr_b(stack_a, stack_b);
	else
		ft_error();
}

void	ft_start_bonus(t_info **stack_a, t_info **stack_b)
{
	char	*line;

	line = NULL;
	while (ft_get_next_line(&line))
	{
		ft_commands(line, stack_a, stack_b);
		free(line);
	}
	free(line);
}

void	ft_get_stack_a(int argc, char **argv, \
		t_info **stack_a, t_info **stack_b)
{
	int	size;
	int	number;

	size = 0;
	while (argc != 1)
	{
		ft_check_number(argc, argv);
		number = ft_atoi(argv[--argc]);
		ft_add_element(stack_a, number);
		size++;
	}
	if (size > 0)
	{
		ft_check_replays(*stack_a, size);
		ft_start_bonus(stack_a, stack_b);
	}
}

int	main(int argc, char **argv)
{
	t_info	*stack_a;
	t_info	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	ft_get_stack_a(argc, argv, &stack_a, &stack_b);
	if (ft_sorted_bonus(stack_a) && stack_b == NULL)
		write (1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
	ft_stack_clear(&stack_a);
	ft_stack_clear(&stack_b);
	return (0);
}
