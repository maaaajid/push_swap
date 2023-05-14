/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:28:45 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/01 09:57:52 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s, char const *ss)
{
	char	*m;
	size_t	x;
	size_t	z;

	if (!ss)
		return (0);
	x = ft_strlen(s) + ft_strlen(s) + 2;
	z = 0;
	m = (char *)malloc(x * sizeof(char));
	if (!m)
		return (NULL);
	x = 0;
	while (s && s[x] != '\0')
	{
		m[x] = s[x];
		x++;
	}
	m[x++] = ' ';
	while (ss && ss[z] != '\0')
		m[x++] = ss[z++];
	m[x] = '\0';
	return (free((void *)s), m);
}
