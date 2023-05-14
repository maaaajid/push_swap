/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_max_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:14:37 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/06 00:34:06 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	check_min(char *str)
{
	char	*min;
	int		x;

	min = "-2147483648";
	x = ft_strncmp(str, min, 11);
	if (x > 0)
		return (0);
	return (1);
}

int	check_max(char *str)
{
	char	*max;
	int		x;

	max = "2147483647";
	x = ft_strncmp(str, max, 11);
	if (x > 0)
		return (0);
	return (1);
}

void	check_max_min(char *arg)
{
	char	**str;
	int		y;

	str = ft_split(arg, ' ');
	y = 0;
	while (str[y])
	{
		if (str[y][0] == '-' || str[y][0] == '+')
			if (ft_strlen(str[y]) > 11)
				(freestr(str), ft_putstr_fd("Error\n", 2), exit (1));
		if (str[y][0] == '-' || str[y][0] == '+')
			if (ft_strlen(str[y]) == 11)
				if (!check_min(str[y]))
					(freestr(str), ft_putstr_fd("Error\n", 2), exit (1));
		if (ft_isdigit(str[y][0]) && ft_strlen(str[y]) > 10)
			(freestr(str), ft_putstr_fd("Error\n", 2), exit (1));
		if (ft_isdigit(str[y][0]) && ft_strlen(str[y]) == 10)
			if (!check_max(str[y]))
				(freestr(str), ft_putstr_fd("Error\n", 2), exit (1));
		y++;
	}
	if (y == 1)
		exit (0);
	freestr(str);
}
