/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:46:05 by aelbouaa          #+#    #+#             */
/*   Updated: 2022/11/08 23:56:07 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t			x;
	unsigned char	*s;
	unsigned char	*d;

	x = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (s == NULL && d == NULL)
		return (NULL);
	if (dst == src)
		return (dst);
	while (x < len)
	{
		d[x] = s[x];
		x++;
	}
	return (d);
}
