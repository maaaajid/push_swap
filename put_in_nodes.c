/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_in_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 03:10:51 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/06 00:25:19 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_lstsize(t_node *lst)
{
	int	x;

	x = 1;
	if (!lst)
		return (0);
	while (lst->next != 0)
	{
		lst = lst->next;
		x++;
	}
	return (x);
}

t_node	*ft_lstlast(t_node *lst)
{
	if (!lst)
		return (0);
	while (lst->next != 0)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*p;

	if (!*lst)
		return ;
	if (!new)
		return ;
	p = ft_lstlast(*lst);
	p->next = new;
}

t_node	*ft_lstnew(int cont)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (0);
	new->content = cont;
	new->next = 0;
	return (new);
}

t_node	*put_in_nodes(char *arg)
{
	t_node	*head;
	t_node	*new;
	char	**str;
	int		x;

	str = ft_split(arg, ' ');
	x = 1;
	head = ft_lstnew(ft_atoi(str[0]));
	while (str[x])
	{
		new = ft_lstnew(ft_atoi(str[x]));
		ft_lstadd_back(&head, new);
		x++;
	}
	freestr(str);
	return (head);
}
