/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:25:57 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/06 00:56:12 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"checker.h"

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
}

void	ss(t_node **stack, t_node **stack_b)
{
	if (ft_lstsize(*stack) >= 2)
		s(stack);
	if (ft_lstsize(*stack_b) >= 2)
		s(stack_b);
}

void	rr(t_node **stack, t_node **stack_b)
{
	if (ft_lstsize(*stack) >= 2)
		rotate(stack);
	if (ft_lstsize(*stack_b) >= 2)
		rotate(stack_b);
}

void	rrr(t_node **stack, t_node **stack_b)
{
	if (ft_lstsize(*stack) >= 2)
		rev_rotate(stack);
	if (ft_lstsize(*stack_b) >= 2)
		rev_rotate(stack_b);
}
