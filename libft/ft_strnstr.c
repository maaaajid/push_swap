/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:49:35 by aelbouaa          #+#    #+#             */
/*   Updated: 2022/11/09 18:49:29 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	n;
	size_t	z;
	size_t	x;

	z = 0;
	x = 0;
	n = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)str);
	if (len == 0)
		return (NULL);
	while (str[x] && (x + ft_strlen(needle)) <= len)
	{
		if (str[x] == needle[z])
		{
			z = ft_strncmp(str + x, needle, n);
			if (z == 0)
				return ((char *)&str[x]);
			z = 0;
		}
		x++;
	}
	return (NULL);
}
