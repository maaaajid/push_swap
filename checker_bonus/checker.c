/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 04:44:18 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/06 00:53:54 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"checker.h"

void	ko_or_ok(t_node **stack, t_node **stack_b)
{
	t_node	*temp;

	temp = *stack;
	if (*stack_b)
		(ft_putstr_fd("KO\n", 1), exit (0));
	while ((*stack)->next != 0)
	{
		if ((*stack)->content > (*stack)->next->content)
		{
			*stack = temp;
			(ft_putstr_fd("KO\n", 1), exit (0));
		}
		*stack = (*stack)->next;
	}
	*stack = temp;
	(ft_putstr_fd("OK\n", 1), exit (0));
}

void	checker(t_node **stack, t_node **stack_b, char *str)
{
	if (str && !ft_strncmp(str, "sa\n", ft_strlen(str)))
		s(stack);
	else if (str && !ft_strncmp(str, "sb\n", ft_strlen(str)))
		s(stack_b);
	else if (str && !ft_strncmp(str, "ss\n", ft_strlen(str)))
		ss(stack, stack_b);
	else if (str && !ft_strncmp(str, "pa\n", ft_strlen(str)))
		push(stack_b, stack);
	else if (str && !ft_strncmp(str, "pb\n", ft_strlen(str)))
		push(stack, stack_b);
	else if (str && !ft_strncmp(str, "ra\n", ft_strlen(str)))
		rotate(stack);
	else if (str && !ft_strncmp(str, "rb\n", ft_strlen(str)))
		rotate(stack_b);
	else if (str && !ft_strncmp(str, "rr\n", ft_strlen(str)))
		rr(stack, stack_b);
	else if (str && !ft_strncmp(str, "rra\n", ft_strlen(str)))
		rev_rotate(stack);
	else if (str && !ft_strncmp(str, "rrb\n", ft_strlen(str)))
		rev_rotate(stack_b);
	else if (str && !ft_strncmp(str, "rrr\n", ft_strlen(str)))
		rrr(stack, stack_b);
	else if (str)
		(ft_putstr_fd("Error\n", 2), exit (1));
}

int	main(int ac, char **av)
{
	t_node	*stack;
	t_node	*stack_b;
	char	*str;
	int		x;

	x = 1;
	stack_b = 0;
	if (ac <= 1)
		(exit (0));
	str = argument(av);
	check_max_min(str);
	duplicate(str);
	stack = put_in_nodes(str);
	while (str)
	{
		free(str);
		str = get_next_line(0);
		checker(&stack, &stack_b, str);
	}
	ko_or_ok(&stack, &stack_b);
}
