/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:48:32 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/04 22:34:14 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"checker.h"

char	*clean(char *buffer)
{
	char	*str;
	int		z;
	int		x;

	if (!get_strchr(buffer, '\n'))
		return (free(buffer), NULL);
	z = 0;
	x = 0;
	while (buffer[z] != '\n' && buffer[z])
		z++;
	if (buffer[z] == '\n')
		z++;
	str = malloc(get_strlen(buffer) - z + 1);
	if (!str)
		return (free(buffer), free(str), NULL);
	while (buffer[z])
	{
		str[x] = buffer[z];
		z++;
		x++;
	}
	str[x] = '\0';
	return (free(buffer), str);
}

char	*ft_get_line(int fd, char *buffer)
{
	int		x;
	char	*str;

	x = 1;
	while (!get_strchr(buffer, '\n') && x != 0)
	{
		str = malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!str)
			return (free(str), free(buffer), NULL);
		x = read(fd, str, BUFFER_SIZE);
		if (x == -1)
			return (free(str), free(buffer), NULL);
		if (x == 0 && get_strlen(buffer) == 0)
			return (free(str), free(buffer), NULL);
		str[x] = '\0';
		buffer = get_strjoin(buffer, str);
		free(str);
	}
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd <= -1 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_get_line(fd, buffer);
	if (!buffer)
		return (NULL);
	line = getdup(buffer);
	buffer = clean(buffer);
	return (line);
}
