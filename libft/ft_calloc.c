/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 00:35:11 by aelbouaa          #+#    #+#             */
/*   Updated: 2022/11/08 18:12:06 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t elem, size_t size)
{
	char	*str;

	str = malloc(elem * size);
	if (!str)
		return (0);
	ft_bzero(str, elem * size);
	return (str);
}
