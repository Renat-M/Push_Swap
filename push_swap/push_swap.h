/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:54:45 by meourea           #+#    #+#             */
/*   Updated: 2022/01/14 13:26:12 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_info
{
	int				number;
	int				index;
	struct s_info	*next;	
}				t_info;

int		ft_isdigit(int c);
int		ft_atoi(const char *str);
void	ft_error(void);
void	ft_check_number(int argc, char **argv);
void	ft_check_replays(t_info *stack_a, int size);
void	ft_add_element(t_info **stack_a, int number);
int		ft_add_element_arr(int *arr, t_info *stack_a, int size);
int		ft_bubble_sort(int *arr, int size);
void	ft_get_index(t_info **stack_a, int size);
int		ft_sorted(t_info *stack_a);
void	ft_sorting(t_info **stack_a, t_info **stack_b, int size);
int		ft_max_index(t_info **stack_a);
int		ft_min_index(t_info **stack_a);
int		ft_check_middle(t_info **stack_a, int index, int size);
void	ft_main_sort(t_info **stack_a, t_info **stack_b, int size);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_sorted_bonus(t_info *stack_a);
void	ft_stack_clear(t_info **stack_a);
void	ft_start(t_info **stack_a, t_info **stack_b, int size);
void	ft_sa(t_info **stack_a);
void	ft_sb(t_info **stack_b);
void	ft_pa(t_info **stack_a, t_info **stack_b);
void	ft_pb(t_info **stack_a, t_info **stack_b);
void	ft_ra(t_info **stack_a);
void	ft_rb(t_info **stack_b);
void	ft_rra(t_info **stack_a);
void	ft_rrb(t_info **stack_b);
void	ft_sa_b(t_info **stack_a);
void	ft_sb_b(t_info **stack_b);
void	ft_pa_b(t_info **stack_a, t_info **stack_b);
void	ft_pb_b(t_info **stack_a, t_info **stack_b);
void	ft_ra_b(t_info **stack_a);
void	ft_rb_b(t_info **stack_b);
void	ft_rra_b(t_info **stack_a);
void	ft_rrb_b(t_info **stack_b);
void	ft_rrr_b(t_info **stack_a, t_info **stack_b);
void	ft_ss_b(t_info **stack_a, t_info **stack_b);
void	ft_rr_b(t_info **stack_a, t_info **stack_b);

#endif