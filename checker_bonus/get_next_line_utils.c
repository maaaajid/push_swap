/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:19:38 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/04 22:32:38 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"checker.h"

size_t	get_strlen(const char *str)
{
	size_t	x;

	x = 0;
	if (!str)
		return (0);
	while (str[x])
		x++;
	return (x);
}

char	*get_strdup(char *s1)
{
	size_t	x;
	char	*ss;

	x = get_strlen(s1);
	ss = malloc(sizeof(char) * (x + 1));
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

char	*getdup(char *s1)
{
	int		z;
	int		x;
	char	*ss;

	x = 0;
	z = 0;
	if (!s1)
		return (NULL);
	while (s1[z] != '\n' && s1[z])
		z++;
	ss = malloc(z + 2 * sizeof(char));
	if (!ss)
		return (free(s1), NULL);
	while (x < z)
	{
		ss[x] = s1[x];
		x++;
	}
	if (get_strchr(s1, '\n'))
		ss[x++] = '\n';
	ss[x] = '\0';
	return (ss);
}

int	get_strchr(const char *s, int c)
{
	int		x;
	char	*ss;

	x = 0;
	if (s == NULL)
		return (0);
	ss = (char *)s;
	if ((char)c == '\0')
		return (1);
	while (ss[x])
	{
		if (ss[x] == (char)c)
			return (1);
		x++;
	}
	return (0);
}

char	*get_strjoin(char *s1, char *s2)
{
	char	*m;
	size_t	x;
	size_t	z;

	x = get_strlen(s1) + get_strlen(s2) +1;
	z = 0;
	m = malloc(sizeof(char) * x);
	if (!m)
		return (NULL);
	x = 0;
	while (s1 && s1[x] != '\0')
	{
		m[x] = s1[x];
		x++;
	}
	while (s2 && s2[z] != '\0')
		m[x++] = s2[z++];
	m[x] = '\0';
	free(s1);
	return (m);
}
