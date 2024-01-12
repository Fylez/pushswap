/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 22:53:39 by lzaengel          #+#    #+#             */
/*   Updated: 2024/01/12 13:26:21 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_first_min(t_list *lst)
{
	t_list	*temp;
	int		min;

	if (!lst)
		return (0);
	temp = lst;
	min = temp->content;
	while (temp -> next)
	{
		if (temp -> content < min)
			min = temp -> content;
		temp = temp -> next;
	}
	if (temp -> content < min)
			min = temp -> content;
	return (min);
}

int	ft_sec_min(t_list *lst, int fmin)
{
	t_list	*temp;
	int		min;

	if (!lst)
		return (0);
	temp = lst;
	if (temp ->content != fmin)
		min = temp->content;
	else
		min = temp->next->content;
	while (temp -> next)
	{
		if (temp -> content < min && temp -> content != fmin)
			min = temp -> content;
		temp = temp -> next;
	}
	if (temp -> content < min && temp -> content != fmin)
			min = temp -> content;
	return (min);
}

void	three_numbers(t_list **lst)
{
	t_list	*next;
	t_list	*node;

	node = *lst;
	next = node -> next;
	if (node->content > next->content && node->content > next->next->content)
	{
		if (next -> next > next)
			ra(lst);
		else
		{
			ra(lst);
			sa(*lst);
		}
	}
	if (is_sorted(*lst) == 1)
		return ;
	sa(*lst);
	if (is_sorted(*lst) == 1)
		return ;
	ra(lst);
	if (is_sorted(*lst) == 1)
		return ;
	sa(*lst);
}

void	push_fsmin(t_list **lst, t_list **lst2, int min, int secondmin)
{
	t_list	*node;

	node = *lst;
	while (node ->content != min && node -> content != secondmin)
	{
		if (ft_lstlast(*lst)->content == min
			|| ft_lstlast(*lst)->content == secondmin)
			rra(lst);
		else
			ra(lst);
		node = *lst;
	}
	pb(lst, lst2);
}


void	fourorfive(t_list **lst, t_list **lst2, int size)
{
	int		min;
	int		secondmin;
	t_list	*node;

	min = ft_first_min(*lst);
	secondmin = ft_sec_min(*lst, min);
	if (size == 4)
	{
		push_fsmin(lst, lst2, min, min - 1);
		three_numbers(lst);
		fill_a(lst, lst2);
	}
	if (size == 5)
	{
		push_fsmin(lst, lst2, min, secondmin);
		push_fsmin(lst, lst2, min, secondmin);
		three_numbers(lst);
		node = *lst2;
		if (node->content < node->next->content)
			sb(*lst2);
		three_numbers(lst);
		fill_a(lst, lst2);
	}
}

