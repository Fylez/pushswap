/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 22:18:54 by lzaengel          #+#    #+#             */
/*   Updated: 2024/01/11 19:30:27 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		i;

	if (!lst)
		return (0);
	temp = lst;
	i = 1;
	while (temp -> next)
	{
		i++;
		temp = temp -> next;
	}
	return (i);
}

int	ft_bits(t_list *lst)
{
	t_list	*temp;
	int		max;
	int		i;

	i = 0;
	if (!lst)
		return (0);
	temp = lst;
	max = lst->content;
	while (temp -> next)
	{
		if (temp -> content > max)
			max = temp -> content;
		temp = temp -> next;
	}
	if (temp -> content > max)
			max = temp -> content;
	while ((max >> i) != 0)
		i++;
	return (i);
}




int	ft_min(t_list *lst)
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
	if (min >= 0)
		min = +1;
	return (min - 1);
}

void	ft_lstsimple(t_list *lst, int min)
{
	t_list	*temp;

	if (lst == NULL)
		return ;
	temp = lst;
	temp -> content = temp -> content - min;
	while (temp -> next)
	{
		temp = temp-> next;
		temp -> content = temp -> content - min;
	}
}

void	ft_lstdesimple(t_list *lst, int min)
{
	t_list	*temp;

	if (lst == NULL)
		return ;
	temp = lst;
	temp -> content = temp -> content + min;
	while (temp -> next)
	{
		temp = temp-> next;
		temp -> content = temp -> content + min;
	}
}

void	radixsort(t_list **lst, t_list **lst2)
{
	t_list	*temp;
	int		i[2];
	int		mbits;
	int		min;
	int		max;

	i[0] = 0;
	temp = *lst;
	min = ft_min(*lst);
	ft_lstsimple(*lst, min);
	mbits = ft_bits(*lst);
	while (i[0] < mbits)
	{
		max = ft_lstsize(*lst);
		i[1] = 0;
		while (i[1]++ < max)
		{
			temp = *lst;
			if (((temp -> content >> i[0]) & 1) == 1)
			{
				ra(lst);
			}
			else
			{
				pb(lst, lst2);
			}
			temp = *lst;
		}
		max = ft_lstsize(*lst2);
		i[1] = 0;
		while (i[1]++ < max)
			pa(lst2, lst);
		i[0]++;
	}
	ft_lstdesimple(*lst, min);
}