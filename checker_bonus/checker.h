/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checke.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:13:26 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/04 22:25:09 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include<stdio.h>
# include <fcntl.h>
# include<stdlib.h>
# include <limits.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct node
{
	int			content;
	struct node	*next;
}					t_node;

size_t	get_strlen(const char *str);
char	*getdup(char *s1);
char	*get_next_line(int fd);
int		get_strchr(const char *s, int c);
char	*get_strjoin(char *s1, char *s2);
char	*get_strdup(char *s1);
void	rrr(t_node **stack, t_node **stack_b);
void	rev_rotate(t_node **stack);
void	rr(t_node **stack, t_node **stack_b);
void	rotate(t_node **stack);
void	push(t_node **src, t_node **dst);
void	ss(t_node **stack, t_node **stack_b);
void	s(t_node **head);
t_node	*put_in_nodes(char *arg);
t_node	*ft_lstlast(t_node *lst);
char	*argument(char **av);
void	check_max_min(char *arg);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	freestr(char **str);
int		ft_lstsize(t_node *lst);
void	duplicate(char *str);

#endif
