/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 08:07:01 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/06 00:15:33 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	duplicate(char *str)
{
	int		x;
	int		y;
	char	**s;

	y = 0;
	x = y + 1;
	s = ft_split(str, ' ');
	while (s[y])
	{
		while (s[x])
		{
			if (ft_atoi(s[y]) == ft_atoi(s[x]))
				(freestr(s), ft_putstr_fd("Error\n", 2), exit(1));
			x++;
		}
		y++;
		x = y + 1;
	}
	freestr(s);
	sorted(str);
}

void	sorted(char *str)
{
	int		x;
	int		y;
	char	**s;

	y = 0;
	x = y + 1;
	s = ft_split(str, ' ');
	while (s[y])
	{
		if (ft_atoi(s[y]) > ft_atoi(s[x]))
			break ;
		y++;
		x = y + 1;
		if (!s[x])
			(freestr(s), exit(0));
	}
	freestr(s);
}
