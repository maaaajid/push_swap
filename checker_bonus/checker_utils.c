/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 05:28:56 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/04 22:24:35 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"checker.h"

void	s(t_node **head)
{
	t_node	*tmp;
	t_node	*t;

	if (ft_lstsize(*head) >= 2)
	{
		t = *head;
		tmp = (*head)->next->next;
		*head = (*head)->next;
		(*head)->next = t;
		(*head)->next->next = tmp;
	}
}

void	push(t_node **src, t_node **dst)
{
	t_node	*tmp;

	if (ft_lstsize(*src) >= 1)
	{
		tmp = *src;
		*src = (*src)->next;
		tmp->next = *dst;
		*dst = tmp;
	}
}

void	rotate(t_node **stack)
{
	t_node	*tmp;

	if (ft_lstsize(*stack) >= 2)
	{
		tmp = (*stack)->next;
		ft_lstlast(*stack)->next = *stack;
		(*stack)->next = 0;
		*stack = tmp;
	}
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
	}
}
