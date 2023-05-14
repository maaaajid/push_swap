/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:09:17 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/02 08:10:16 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_node	*get_small(t_node **stack, int *tab, int ac, int i)
{
	t_node	*tmp;
	int		x;

	x = 0;
	ac -= 2;
	tmp = *stack;
	while ((*stack) && (*stack)->content != tab[i])
	{
		*stack = (*stack)->next;
		x++;
	}
	if (x <= ft_lstsize(tmp) / 2)
		while (x-- > 0)
			rotate(&tmp);
	else if (x >= ft_lstsize(tmp) / 2)
		while (x++ < ft_lstsize(tmp))
			rev_rotate(&tmp);
	return (tmp);
}

void	sort_five(t_node **stack, t_node **stack_b, int *tab, int ac)
{
	int	i;

	i = 0;
	*stack = get_small(stack, tab, ac, i);
	push_b(stack, stack_b);
	i++;
	*stack = get_small(stack, tab, ac, i);
	push_b(stack, stack_b);
	if (ft_lstsize(*stack) == 3)
		sort_tree(stack);
	else if ((*stack)->content > (*stack)->next->content)
		sa(stack);
	push_a(stack_b, stack);
	push_a(stack_b, stack);
}
