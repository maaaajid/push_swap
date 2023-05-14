/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:45:22 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/04 14:52:15 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sa(t_node **head)
{
	t_node	*tmp;
	t_node	*t;

	t = *head;
	tmp = (*head)->next->next;
	*head = (*head)->next;
	(*head)->next = t;
	(*head)->next->next = tmp;
	ft_putstr_fd("sa\n", 1);
}

void	push_a(t_node **src, t_node **dst)
{
	t_node	*tmp;

	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dst;
	*dst = tmp;
	ft_putstr_fd("pa\n", 1);
}

void	push_b(t_node **src, t_node **dst)
{
	t_node	*tmp;

	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dst;
	*dst = tmp;
	ft_putstr_fd("pb\n", 1);
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
	ft_putstr_fd("ra\n", 1);
}

void	rotate_b(t_node **stack)
{
	t_node	*tmp;

	if (ft_lstsize(*stack) >= 2)
	{
		tmp = (*stack)->next;
		ft_lstlast(*stack)->next = *stack;
		(*stack)->next = 0;
		*stack = tmp;
	}
	ft_putstr_fd("rb\n", 1);
}
