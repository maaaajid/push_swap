/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:33:02 by aelbouaa          #+#    #+#             */
/*   Updated: 2022/11/08 15:32:55 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	x;
	char	*ss;

	x = ft_strlen(s1);
	ss = malloc(x + 1 * sizeof(char));
	if (!ss)
		return (NULL);
	x = 0;
	while (s1[x])
	{
		ss[x] = s1[x];
		x++;
	}
	ss[x] = '\0';
	return (ss);
}
