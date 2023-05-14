/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:49:15 by aelbouaa          #+#    #+#             */
/*   Updated: 2022/11/09 23:45:30 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			x;
	unsigned char	*s1;
	unsigned char	*s2;

	x = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (x < n)
	{
		if (s1[x] > s2[x])
			return (s1[x] - s2[x]);
		else if (s1[x] < s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
}
