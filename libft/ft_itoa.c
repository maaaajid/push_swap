/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 02:36:42 by aelbouaa          #+#    #+#             */
/*   Updated: 2022/11/03 21:52:40 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	intlen(long nn)
{
	int	x;

	x = 0;
	if (nn <= 0)
		x++;
	while (nn)
	{
		nn = nn / 10;
		x++;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	int		x;
	long	nn;
	char	*m;

	nn = n;
	x = intlen(nn);
	m = (char *)malloc((x + 1) * sizeof(char));
	if (!m)
		return (NULL);
	if (nn == 0)
		m[0] = '0';
	m[x] = '\0';
	if (nn < 0)
	{
		m[0] = '-';
		nn = nn * -1;
	}
	while (nn)
	{
		m[--x] = nn % 10 + 48;
		nn = nn / 10;
	}
	return (m);
}
