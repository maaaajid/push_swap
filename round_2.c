/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   round_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 07:36:55 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/02 08:16:27 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	srch_pos(t_node *stack_b, int big)
{
	t_node	*tmp;
	int		x;

	tmp = stack_b;
	x = 0;
	while (tmp)
	{
		if (tmp->content == big)
			return (x);
		tmp = tmp->next;
		x++;
	}
	return (-1);
}

void	else_b(t_node **stack, t_node **stack_b, int *tab, t_big *s)
{
	if (srch_pos(*stack_b, tab[s->size]) >= 0)
	{
		if ((*stack_b)->content == tab[s->size])
		{
			push_a(stack_b, stack);
			s->size--;
		}
		else if (s->last == 0
			|| ((*stack_b)->content > (ft_lstlast(*stack))->content))
		{
			push_a(stack_b, stack);
			rotate(stack);
			s->last++;
		}
		else
		{
			if (srch_pos(*stack_b, tab[s->size]) < ft_lstsize(*stack_b) / 2)
				rotate_b(stack_b);
			else
				rev_rotate_b(stack_b);
		}
	}
}

void	round_2(t_node **stack, t_node **stack_b, int *tab, t_big *s)
{
	while (*stack_b)
	{
		if (srch_pos(*stack_b, tab[s->size]) >= 0)
			else_b(stack, stack_b, tab, s);
		else
		{
			rev_rotate(stack);
			s->size--;
			s->last--;
		}
	}
	while (s->last)
	{
		rev_rotate(stack);
		s->last--;
	}
}
