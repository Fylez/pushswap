/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:12:49 by lzaengel          #+#    #+#             */
/*   Updated: 2024/01/11 19:30:30 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list **lst1, t_list **lst2)
{
	t_list	*topush;

	topush = *lst1;
	*lst1 = 0;
	if (topush -> next)
	{
		*lst1 = topush -> next;
		topush -> next = 0;
	}
	if (!lst2)
		*lst2 = topush;
	else
	{
		topush -> next = *lst2;
		*lst2 = topush;
	}
}

void	pb(t_list **lst1, t_list **lst2)
{
	ft_printf("pb\n");
	push(lst1, lst2);
}

void	pa(t_list **lst1, t_list **lst2)
{
	ft_printf("pa\n");
	push(lst1, lst2);
}
