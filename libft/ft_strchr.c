/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 04:32:08 by aelbouaa          #+#    #+#             */
/*   Updated: 2022/11/03 22:29:27 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c	)
{
	int		x;
	char	*ss;

	x = 0;
	ss = (char *)s;
	if ((char)c == '\0')
		return (ss + ft_strlen(ss));
	while (ss[x])
	{
		if (ss[x] == (char)c)
			return (&ss[x]);
		x++;
	}
	return (NULL);
}
