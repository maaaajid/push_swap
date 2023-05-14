/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 08:05:04 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/03 06:28:03 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include"./libft/libft.h"

typedef struct node
{
	int			content;
	struct node	*next;
}					t_node;

typedef struct s_big
{
	int	mid;
	int	start;
	int	end;
	int	x;
	int	ofest;
	int	range;
	int	last;
	int	size;
}	t_big;

char	*argument(char **av);
void	check_chars(char *arg);
void	splits(char *arg);
void	check_max_min(char *arg);
t_node	*put_in_nodes(char *arg);
t_node	*ft_lstnew(int cont);
void	ft_lstadd_back(t_node **lst, t_node *new);
t_node	*ft_lstlast(t_node *lst);
int		ft_lstsize(t_node *lst);
void	sa(t_node **head);
void	push_a(t_node **src, t_node **dst);
void	push_b(t_node **src, t_node **dst);
void	rotate(t_node **stack);
void	rotate_b(t_node **stack);
void	rev_rotate(t_node **stack);
void	rev_rotate_b(t_node **stack);
void	duplicate(char *str);
void	sort(t_node **stack, int *tab, int ac, t_big *s);
void	sorted(char *str);
void	freestr(char	**str);
void	sort_tree(t_node **stack);
void	sort_five(t_node **stack, t_node **stack_b, int *tab, int ac);
void	insialaze(t_big *s);
void	sort_big(t_node **stack, t_node **stack_b, int *tab, t_big *s);
void	round_2(t_node **stack, t_node **stack_b, int *tab, t_big *s);

#endif