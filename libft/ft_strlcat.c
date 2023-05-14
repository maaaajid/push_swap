/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 03:54:29 by aelbouaa          #+#    #+#             */
/*   Updated: 2022/11/03 22:40:24 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	x;
	size_t	s;
	size_t	d;

	x = 0;
	s = ft_strlen(src);
	if (!dst && !size)
		return (s);
	d = ft_strlen(dst);
	if (!size)
		return (s);
	if (d > size)
		return (s + size);
	while (src[x] && (x + d < size - 1))
	{
		dst[d + x] = src[x];
		x++;
	}
	dst[d + x] = '\0';
	return (d + s);
}
