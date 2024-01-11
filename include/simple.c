/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 22:53:39 by lzaengel          #+#    #+#             */
/*   Updated: 2024/01/12 00:10:15 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
