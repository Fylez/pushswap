/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:57:26 by lzaengel          #+#    #+#             */
/*   Updated: 2024/01/11 21:05:00 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
