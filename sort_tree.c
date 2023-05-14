/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 10:05:45 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/02 08:35:03 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort_tree(t_node **stack)
{
	if ((*stack)->content < (*stack)->next->next->content
		&& (*stack)->next->content > (*stack)->next->next->content)
	{
		sa(stack);
		rotate(stack);
	}
	else if ((*stack)->content < (*stack)->next->next->content
		&& (*stack)->next->content < (*stack)->next->next->content)
		sa(stack);
	else if ((*stack)->content < (*stack)->next->content
		&& (*stack)->next->content > (*stack)->next->next->content)
		rev_rotate(stack);
	else if ((*stack)->content > (*stack)->next->next->content
		&& (*stack)->next->content < (*stack)->next->next->content)
		rotate(stack);
	else if ((*stack)->content > (*stack)->next->next->content
		&& (*stack)->content > (*stack)->next->content)
	{
		sa(stack);
		rev_rotate(stack);
	}
}
