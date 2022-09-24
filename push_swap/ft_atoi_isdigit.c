/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 20:11:05 by meourea           #+#    #+#             */
/*   Updated: 2021/10/16 16:55:16 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int	ft_skip_spaces(const char *str, int *sign)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 8 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		*sign = -1;
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	long int	tmp;
	int			i;
	int			n;
	int			sign;

	tmp = 0;
	n = 0;
	sign = 1;
	i = ft_skip_spaces(str, &sign);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			tmp = tmp * 10 + str[i] - 48;
			i++;
		}
		else
			ft_error();
	}
	if (tmp * sign < -2147483648 || tmp * sign > 2147483647)
		ft_error();
	n = tmp * sign;
	return (n);
}
