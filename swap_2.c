/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 08:28:54 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/04 15:02:22 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	rev_rotate_b(t_node **stack)
{
	t_node	*tmp;
	t_node	*t;
	int		x;

	x = 0;
	if (ft_lstsize(*stack) >= 2)
	{
		t = *stack;
		tmp = ft_lstlast(*stack);
		while (x++ < (ft_lstsize(*stack) - 2))
			t = t->next;
		t->next = 0;
		tmp->next = *stack;
		(*stack) = tmp;
	}
	ft_putstr_fd("rrb\n", 1);
}

void	rev_rotate(t_node **stack)
{
	t_node	*tmp;
	t_node	*t;
	int		x;

	x = 0;
	if (ft_lstsize(*stack) >= 2)
	{
		t = *stack;
		tmp = ft_lstlast(*stack);
		while (x++ < (ft_lstsize(*stack) - 2))
			t = t->next;
		t->next = 0;
		tmp->next = *stack;
		(*stack) = tmp;
		ft_putstr_fd("rra\n", 1);
	}
}
