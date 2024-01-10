/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 21:52:28 by lzaengel          #+#    #+#             */
/*   Updated: 2024/01/10 22:17:57 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **lst1, t_list **lst2)
{
	t_list *topush;

	topush = *lst1;
	*lst1 = 0;
	if(topush -> next)
	{
		*lst1 = topush -> next;	
		topush -> next = 0;
	}
	if(!lst2)
		*lst2 = topush;
	else
	{
		topush -> next = *lst2;
		*lst2 = topush;
	}
}
void	ra(t_list **lst)
{
	t_list	*temp;

	ft_printf("ra\n");
	temp = *lst;
	if(temp -> next)
	{
		*lst = temp -> next;
		temp -> next = 0;
		ft_lstadd_back(lst, temp);
	}
}
