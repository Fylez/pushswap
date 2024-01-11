/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:31:28 by lzaengel          #+#    #+#             */
/*   Updated: 2024/01/11 19:31:49 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_list **lst)
{
	t_list	*temp;

	temp = *lst;
	if (temp -> next)
	{
		*lst = temp -> next;
		temp -> next = 0;
		ft_lstadd_back(lst, temp);
	}
}

void	ra(t_list **lst)
{
	ft_printf("ra\n");
	rotate(lst);
}

void	rb(t_list **lst)
{
	ft_printf("rb\n");
	rotate(lst);
}



void	rr(t_list **lst, t_list **lst2)
{
	ft_printf("rr\n");
	rotate(lst);
	rotate(lst2);
}
