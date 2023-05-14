/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:35:59 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/02 08:22:21 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	insialaze(t_big *s)
{	
	s->last = 0;
	s->end = 0;
	s->size = 0;
	s->mid = 0;
	s->start = 0;
	s->end = 0;
	s->range = 0;
	s->last = 0;
}

int	ra_or_rra(t_node **stack, int *tab, int start, int end)
{
	t_node	*tmp;
	int		x;

	x = 0;
	tmp = *stack;
	while (tmp->next != 0 && (tmp->content <= tab[start]
			|| tmp->content >= tab[end]))
	{
		tmp = tmp->next;
		x++;
		if (tmp->content >= tab[start] && tmp->content <= tab[end])
			return (x);
	}
	return (-1);
}

void	else_a(t_node **stack, int *tab, t_big *s)
{
	s->x = ra_or_rra(stack, tab, s->start, s->end);
	if (s->x == -1)
	{
		s->start = s->start - s->ofest;
		if (s->start < 0)
			s->start = 0;
		s->end = s->end + s->ofest;
		if (s->end > s->size)
			s->end = s->size;
	}
	if (s->x > 0 && s->x < s->mid)
		while (s->x-- > 0)
			rotate(stack);
	else if (s->x >= s->mid)
		while (s->x++ < s->size)
			rev_rotate(stack);
}

void	sort_big(t_node **stack, t_node **stack_b, int *tab, t_big *s)
{
	s->last = 0;
	s->ofest = (ft_lstsize(*stack) - 1) / s->range ;
	s->size = ft_lstsize(*stack) - 1 ;
	s->mid = ((ft_lstsize(*stack) - 1) / 2);
	s->start = s->mid - s->ofest;
	s->end = s->mid + s->ofest;
	while (*stack)
	{
		if ((*stack)->content >= tab[s->start]
			&& (*stack)->content <= tab[s->end])
		{
			if (!(*stack_b) || (*stack)->content >= tab[s->mid])
				push_b(stack, stack_b);
			else if ((*stack)->content <= tab[s->mid])
			{
				push_b(stack, stack_b);
				rotate_b(stack_b);
			}
		}
		else if ((*stack)->content <= tab[s->start]
			|| (*stack)->content >= tab[s->end])
			else_a(stack, tab, s);
	}
	round_2(stack, stack_b, tab, s);
}
