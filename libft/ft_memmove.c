/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:51:03 by aelbouaa          #+#    #+#             */
/*   Updated: 2022/11/10 21:54:56 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			x;
	unsigned char	*d;
	unsigned char	*s;

	x = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d == NULL && s == NULL)
		return (NULL);
	if (dst == src)
		return (dst);
	if (d < s)
	{
		while (x < len)
		{
			d[x] = s[x];
			x++;
		}
		return (d);
	}
	while (len-- > x)
	{
		d[len] = s[len];
	}
	return (d);
}
