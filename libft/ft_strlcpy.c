/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 07:41:46 by aelbouaa          #+#    #+#             */
/*   Updated: 2022/11/03 22:42:26 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsz)
{
	size_t	x;
	char	*sr;

	x = 0;
	sr = (char *)src;
	if (dsz == 0)
		return (ft_strlen(sr));
	while (sr[x] && x < dsz - 1)
	{
		dst[x] = sr[x];
		x++;
	}
	dst[x] = '\0';
	return (ft_strlen(sr));
}
