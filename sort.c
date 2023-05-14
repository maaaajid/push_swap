/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:58:28 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/03 04:40:49 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort(t_node **stack, int *tab, int ac, t_big *s)
{
	t_node	*stack_b;

	stack_b = 0;
	if (ft_lstsize(*stack) == 2)
		sa(stack);
	else if (ft_lstsize(*stack) == 3)
		sort_tree(stack);
	else if (ft_lstsize(*stack) <= 5)
		sort_five(stack, &stack_b, tab, ac);
	else if (ft_lstsize(*stack) > 5)
	{
		if (ft_lstsize(*stack) <= 10)
			s->range = 5;
		else if (ft_lstsize(*stack) <= 150)
			s->range = 8;
		else if (ft_lstsize(*stack) > 150)
			s->range = 16;
		sort_big(stack, &stack_b, tab, s);
	}
}
