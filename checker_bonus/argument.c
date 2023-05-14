/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:46:51 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/06 00:19:27 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"checker.h"

void	freestr(char **str)
{
	int	x;

	x = 0;
	while (str[x])
		free(str[x++]);
	free(str);
}

void	splits(char *arg)
{
	char	**str;
	int		x;
	int		y;

	x = 0;
	y = 0;
	str = ft_split(arg, ' ');
	while (str[y])
	{
		if (!ft_isdigit(str[y][x]) && str[y][x] != '-' && str[y][x] != '+')
			(freestr(str), ft_putstr_fd("Error\n", 2), exit (1));
		if (str[y][x] == '-' || str[y][x] == '+')
			if (str[y][x + 1] == '\0')
				(freestr(str), ft_putstr_fd("Error\n", 2), exit (1));
		x++;
		while (str[y][x])
		{
			if (!ft_isdigit(str[y][x]))
				(freestr(str), ft_putstr_fd("Error\n", 2), exit (1));
			x++;
		}
		x = 0;
		y++;
	}
	freestr(str);
}

void	check_chars(char *arg)
{
	int	x;

	x = 0;
	if (!ft_isdigit(arg[x]) && arg[x] != '-'
		&& arg[x] != ' ' && arg[x] != '+')
		(ft_putstr_fd("Error\n", 2), exit (1));
	if (arg[x] == '-' || arg[x] == '+')
		if (arg[x + 1] == ' ' || arg[x + 1] == '\0')
			(ft_putstr_fd("Error\n", 2), exit (1));
	x++;
	while (arg[x])
	{
		if (ft_strchr(arg, ' '))
		{
			splits(arg);
			break ;
		}
		if (!ft_isdigit(arg[x]))
			(ft_putstr_fd("Error\n", 2), exit (1));
		x++;
	}
}

char	*argument(char **av)
{
	int		y;
	char	*str;

	y = 1;
	while (av[y])
	{
		check_chars(av[y]);
		y++;
	}
	y = 2;
	str = ft_strdup(av[1]);
	while (av[y])
	{
		str = ft_strjoin(str, av[y]);
		y++;
	}
	return (str);
}
