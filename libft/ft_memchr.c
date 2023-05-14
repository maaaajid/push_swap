/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:05:33 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 05:31:15 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			x;

	a = (unsigned char *)s;
	x = 0;
	while (x < n)
	{
		if (a[x] == (unsigned char)c)
		{
			return (&a[x]);
		}
		x++;
	}
	return (NULL);
}
