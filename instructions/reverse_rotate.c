/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:31:04 by lzaengel          #+#    #+#             */
/*   Updated: 2024/01/11 19:31:56 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_list **lst)
{
	t_list	*temp;
	t_list	*newlst;

	temp = *lst;
	newlst = ft_lstlast(*lst);
	if (temp != newlst)
	{
		while (temp -> next != newlst)
		{
			temp = temp -> next;
		}
		temp -> next = 0;
		newlst -> next = *lst;
		*lst = newlst;
	}
}

void	rra(t_list **lst)
{
	ft_printf("rra\n");
	reverse_rotate(lst);
}

void	rrb(t_list **lst)
{
	ft_printf("rrb\n");
	reverse_rotate(lst);
}

void	rrr(t_list **lst, t_list **lst2)
{
	ft_printf("rrr\n");
	reverse_rotate(lst);
	reverse_rotate(lst2);
}
