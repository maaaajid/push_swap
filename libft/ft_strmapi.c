/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 23:43:10 by aelbouaa          #+#    #+#             */
/*   Updated: 2022/11/10 01:07:32 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	char			*m;

	if (!s)
		return (NULL);
	m = (char *)malloc(ft_strlen(s) + 1);
	if (!m)
		return (NULL);
	x = 0;
	while (s[x])
	{
		m[x] = f(x, s[x]);
		x++;
	}
	m[x] = 0;
	return (m);
}
