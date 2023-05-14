/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:14:45 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/06 00:40:58 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	*put_in_tab(char **str, int ac)
{
	int	*tab;
	int	x;

	tab = malloc(ac * sizeof(int));
	x = 0;
	while (str[x])
	{
		tab[x] = ft_atoi(str[x]);
		x++;
	}
	freestr(str);
	return (tab);
}

int	*sort_tab(char *str, int ac)
{
	int		x;
	int		y;
	char	**s;
	char	*tmp;

	s = ft_split(str, ' ');
	x = 1;
	y = 0;
	while (s[y])
	{
		while (s[x])
		{
			if (ft_atoi(s[y]) > ft_atoi(s[x]))
			{
				tmp = s[y];
				s[y] = s[x];
				s[x] = tmp;
			}
			x++;
		}
		y++;
		x = y + 1;
	}
	x = 0;
	return (put_in_tab(s, ac));
}

int	main(int ac, char **av)
{
	t_big	s;
	t_node	*n;
	char	*str;
	int		*tab;

	if (ac <= 1)
		(exit (0));
	insialaze(&s);
	str = argument(av);
	check_max_min(str);
	n = put_in_nodes(str);
	duplicate(str);
	tab = sort_tab(str, ac);
	sort(&n, tab, ac, &s);
	free(tab);
}
